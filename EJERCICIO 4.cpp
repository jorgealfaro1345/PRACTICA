#include <iostream>

using namespace std;
int invertir(int arr[],const int n){
    if(n==-1){
        return 0;
    }else{
        cout<<arr[n];
        invertir(arr,n-1);
    }
}

int main()
{
    int areglo[]={1,2,3,4,5};
    invertir(areglo,4);
}
