#include <iostream>

#define INIT int i=0
#define CONDIZIONE i<3
#define INCREMENTO ++i

using namespace std;

int main(){
    // -------------------- BLOCCO 1 FOR
    for(INIT ; CONDIZIONE; INCREMENTO){
        // roba
    }
    // -------------------- BLOCCO 1 FOR


    // -------------------- BLOCCO 2 WHILE
    INIT;
    while(CONDIZIONE){
        // roba
        INCREMENTO;
    }
    // -------------------- BLOCCO 2 WHILE


    // -------------------- BLOCCO 3 DO-WHILE
    INIT
    if(CONDIZIONE){
        // risultato
    }else{
        do{
            // roba
            INCREMENTO;
        }while(CONDIZIONE);
    }
    // -------------------- BLOCCO 3 DO-WHILE

    i=0;
    while(i<MAX){
        ++i;
    }

    int n = 1;
    for(; n!=0;){
        cin>>n;
    }

    return 0;
}
