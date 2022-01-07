#include <iostream>
#include <cstdlib>
#define MAX 2
#define MAX_VOTI 10

using namespace std;

struct Alunno{
    string nome;
    string cognome;
    int voto[MAX_VOTI];
};

int main(){
    system("color F0");
    Alunno alunni[MAX];

    for(int i=0; i<MAX; ++i){
        cout<<"Cognome: ";
        cin>>alunni[i].cognome;
        cout<<"Nome: ";
        cin>> alunni[i].nome;
        for( int j=0; j<MAX_VOTI; ++j){
            cout<<"Voto "<<j+1<<": ";
            cin>>alunni[i].voto[j];
            if(alunni[i].voto[j]==0) break;
        }
    }
    system ("cls");
    cout<<"Risultati: \n\n";

    for(int i=0; i<MAX; ++i){
        int max=0, min=10, somma=0, n_voti=0;
        for(int j=0; j<MAX_VOTI; ++j){
            if(alunni[i].voto[j]==0) break;
            if(max<alunni[i].voto[j]) max = alunni[i].voto[j];
            if(min>alunni[i].voto[j]) min = alunni[i].voto[j];
            somma += alunni[i].voto[j];
            n_voti++;
        }
        cout<<"Alunno: "<<alunni[i].nome<<" "<<alunni[i].cognome<<endl
            <<"Min: "<<min<<endl
            <<"Max: "<<max<<endl
            <<"Media: "<<somma/n_voti<<endl
            <<"N° voti: "<<n_voti<<endl<<endl;
    }

    // system("pause");
    return 0;
}

