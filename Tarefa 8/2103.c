#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int lerL(int i, int j, int mLuke[][3]){
	if (i<3){
		if (j<3){
			scanf("%d", &mLuke[i][j]);
			lerL(i, ++j, mLuke);
		}
		else {
            lerL(++i, 0, mLuke);
         }
	}
}

int lerV(int i, int j, int mVader[][3], int mLuke[][3], int vL, int vD, int *f){
	if(i<3){
		if(j<3){
		    if(scanf("%d", &mVader[i][j])==EOF) *f=1;
			lerV(i, ++j, mVader, mLuke, vL, vD, f);
		}
		else {
            lerV(++i, 0, mVader, mLuke, vL, vD, f);
            }
	}
    else
    {
	   	int luke;
        luke=luke1(0, 0, mLuke, 0, 0);
		int total;
        total=vader1(0, 0, mVader, 0, 0,  luke);
		return total;
	}
}
int lifeL(int i, int j, int mLuke[][3], int p1, int p2){
	if(i<3){
		if(j<3){
			if(i==0 && j==2|| i==1 && j==1 || i==2 && j==0){
				if(mLuke[i][j]==1) p1++;	
				else p2++;
			}else{
				if(mLuke[i][j]==0) p2++;
			}
			lifeL(i, ++j, mLuke, p1, p2);
		}
		else lifeL(++i, 0, mLuke, p1, p2);
	}else{
		if(p1==3 && p2==6)return 1;
		else return 0;
	}

}


int lifeV(int i, int j, int mVader[][3], int p1, int p2, int luke){
	if (i<3){
		if (j<3){
			if (i==0 && j==2|| i==1 && j==1 || i==2 && j==0){
				if  (mVader[i][j]==1) p1++;
                	
				else{ 
                    p2++;
                }
			}
			else{
				if (mVader[i][j]==0) {
                    p2++;
                    }

			}
			lifeV(i, ++j, mVader, p1, p2, luke);
		}
		else {
            lifeV(++i, 0, mVader, p1, p2, luke);
        }
	}
	else{
		if(p1==3 && p2==6){
			if(luke==1) {
                return 0;
                }
            else {
                return 1;
            }	
		}
        else{
			if (luke==0 && p2!=6) {
                return 0;
                }
			else {
                return -1;
                }
		}
	}

}

int vader1(int i, int j, int mVader[][3], int p1, int p2, int luke){
	if (i<3){
		if(j<3){
			if(i==j){
				if(mVader[i][j]==1) {
                    p1++;
                }	
				else {
                    p2++;
                }
			}
            else{
				if(mVader[i][j]==0) {
                    p2++;
                    }
			}
			vader1(i, ++j, mVader, p1, p2, luke);
		}
		else vader1(++i, 0, mVader, p1, p2, luke);
	}
	else{
		if (p1==3 && p2==6){
			if (luke==1) {
                return 0;
                }
			else {
                return 1;
            }
		}
		else{
			int valor=lifeV(0,0, mVader, 0,0, luke);
			return valor;
		}
	}

}



int luke1(int i, int j, int mLuke[][3], int p1, int p2) {
	if(i<3){
		if(j<3){
			if(i==j){
				if(mLuke[i][j]==1) {
                    p1++;
                    }	
			}
            else{
				if(mLuke[i][j]==0) {
                    p2++;
                    }
			}
			luke1(i, ++j, mLuke, p1, p2);
		}
		else {
            luke1(++i, 0, mLuke, p1, p2);
            }
	}
	else{
		if(p1==3 && p2==6){
			return 1;
		}
        else{
			int luke=lifeL(0,0, mLuke, 0,0);
			return luke;
		}
	}

}



void disputas(int mLuke[][3], int mVader[][3], int vD, int vL, int total){	
    int f=0;
	int n;
    n=lerL(0,0, mLuke);
	total=lerV(0, 0, mVader, mLuke, vL, vD, &f);
		
	if(total==1) {
        vL-=15;
    }
	else if(total==-1){
        vD-=15;
        }
	

    if(f==1){
    	if(vL<vD) {
            printf("Darth Vader venceu.\n");
            
        }
    	else if(vD<vL) {
            printf("Luke Skywalker venceu.\n");
        }
    	else {
            printf("Houve empate.\n");
        }
    }
    else{
        disputas(mLuke, mVader, vD, vL, total);
    }
}

int main(){
	int vL;
    int vD;
	scanf("%d %d\n", &vL, &vD);
    int mVader[3][3];
	int mLuke[3][3];
	
	disputas(mLuke, mVader, vD, vL, 0);
	return 0;
}
