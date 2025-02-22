#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double valor(int ano, double preco, int dific){
    if (ano== 3 || preco <= 45){
        return preco;
    }
    else{
        double desc;
        
        if(dific == 0){
            desc = preco*0.25;
        }
        else if(dific == 1){
            desc =  preco*0.2;
        }
        else if(dific == 2){
            desc =  preco*0.18;
        }
        else if(dific == 3){
            desc = preco* 0.15;
        }
        else if(dific == 4){
            desc = preco* 0.12;
        }
        else if(dific == 5){
            desc = preco* 0.1;
        }

        if (preco >100){
            desc = desc;
        }else{
            desc=desc/2;
        }

        if (preco-desc<45){
            return 45;
        }
        
          valor(ano+1, preco-desc, dific);
        
    }
}

int loop(int comp, int jogos){
    if (comp == jogos){
        return 0;
    }
    else{
        int dific;
        double reais;
        scanf("%d", &dific);
        scanf("%lf", &reais);
        

        printf("Jogo[%d] = R$%.2lf\n", comp, valor(0, reais, dific));

        loop(comp+1, jogos);
    }
}

int main ()
{
    int jogos;
    scanf("%d", &jogos);
    
    loop(0, jogos);

    return 0;
}
