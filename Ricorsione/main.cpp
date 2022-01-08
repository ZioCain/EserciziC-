#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX 5

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

int main(){
    int arr[MAX];

    for(int i=0; i<MAX; ++i){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }

    cout<<"MAX: "<<max(arr, 0, 0);
    return 0;
}
