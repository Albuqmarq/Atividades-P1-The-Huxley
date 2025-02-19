#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int briga(double Vc, double Vb, int Dc, int Db) {

if (Vc >= 1){

    if (ceil( Vc / Db)<ceil(Vb/Dc)){
        Dc = Dc + 50;
    }
            
    else {
        Vb -= Dc;
    }
            
    
    if (Vb >=1) {
    Vc=Vc-Db;
    }
            
    if (Vc>0 && Vb>0) {
        return briga(Vc, Vb, Dc, Db);
    }      
    else {
        if (Vc>Vb) {
            printf("Clodes\n"); 
        }
        else if (Vb>Vc) printf("Bezaliel\n");{
        }
    }
        return 0;

    }
    return 0;
}

void batalhas(int x) {

    int Vc, Vb, Dc, Db;

    if (x > 0) {
        scanf("%d %d %d %d", &Vc, &Vb, &Dc, &Db);

        briga(Vc, Vb, Dc, Db);

        batalhas(x - 1);
    }
}

int main() {

    int nb;
    scanf("%d", &nb);

    batalhas(nb);

    return 0;
}
