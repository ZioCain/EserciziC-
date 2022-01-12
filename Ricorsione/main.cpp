#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX 3

int max(int array[MAX], int currentMax, int i){
    if(currentMax<array[i])
        currentMax = array[i];
    if(i<MAX-1){
        int next = max(array, currentMax, i+1);
        if(currentMax>next)
            return currentMax;
        else
            return next;
    }else{
        return array[i];
    }
}

bool maggioreDi(int array[MAX], int n, int i){
    if(i<MAX-1)
        return array[i]>n && maggioreDi(array, n, i+1);
    return array[i]>n;
}

int main(){
    int arr[MAX];

    // inserimento dati
    for(int i=0; i<MAX; ++i){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }

    // controllo se tutti i numeri sono maggiori di n
    int n = 10;
    bool trovato = false;

    // while e for con valore booleano
    int i=0;
    while(i<MAX && !trovato){
        trovato = arr[i]<=n;
        ++i;
    }

    for(i=0; i<MAX && !trovato; ++i){
        trovato = arr[i]<=n;
    }
    if(trovato) cout<<"uno minore";
    else cout<<"tutti maggiori";

    // senza bool
    i=0;
    for(; i<MAX && arr[i]>n; ++i);
    if(i==MAX) cout<<"tutti maggiori";
    else cout<<"uno minore";

    // cout<<"MAX: "<<max(arr, 0, 0);
    return 0;
}
