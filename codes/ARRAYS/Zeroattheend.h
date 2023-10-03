#include<iostream>
using namespace std;

void moveZero(int vettore[], int n){
    //primo controllo per vedere se ci sono zei rimasti
    int control = 0;
    for(int i = 0; i < n; i++)
        if(vettore[i] != 0)
            control++;
    if(control == n)
        return;


    //controllo zeri già alla fine
    if(vettore[n - 1] == 0)
        moveZero(vettore, (n - 1));

    
    //spostamento
    else
        for(int i = (n - 1); i >= 0; i--)               //scan
            if(vettore[i] == 0)
            {                                           //verfica
                int temp = 0;                                
                for(int j = i; j < (n - 1); j++)        //spostamento
                {      
                    temp = vettore[j];
                    vettore[j] = vettore[j + 1];    
                    vettore[j + 1] = temp;
                }
                moveZero(vettore, (n - 1));
            }

    



































    // int temp = 0;
    // for(int i = 0; i < n - 1; i++){
        
    //     if(vettore[i] == 0)
    //         if(vettore[i + 1] != 0){
    //             for(; i < n; i++){
    //                 temp = vettore[i];
    //                 vettore[i] = vettore[i + 1];    
    //                 vettore[i + 1] = temp;
    //             }
    //         }
    //         //questo blocco dovrebbe servire nel caso ci sia più di uno 0
    //         //muovendo tutti gli zeri in avanti contemporaneamente
    //         //quando uno 0 zero si affianca ad un altro questo si ferma 
    //         //mentre il secondo viene spostato in avanti in modo che il primo
    //         //non sia più intralciato rifacendo il ciclo. Ovviamente dopo un turno
    //         //lo risarà e quindi si ripeterà il tutto.

    //         

    //         else 
    //             if(vettore[i + 1] == 0){
    //                 temp = vettore[i + 1];
    //                 vettore[i + 1] = vettore[i + 2];    
    //                 vettore[i + 2] = temp;
    //                 --i;
    //             }
    // }
}