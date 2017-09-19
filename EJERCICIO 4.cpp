#include <iostream>

using namespace std;

void invertir(int arr[],int n){
int h=n-1;
    if(n<=n/2){
        arr[n];
    }else{
        arr[n]=arr[h];
        cout<<arr[n]<<"::";
        invertir(arr,h);
    }
}

int main()
{
    int areglo[]={1,2,3,4,5};
    invertir(areglo,5);
    for(int i=0;i<5;i++){
        cout<<areglo[i];
    }
}
