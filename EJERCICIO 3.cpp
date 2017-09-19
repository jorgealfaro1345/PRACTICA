#include <iostream>

using namespace std;
void invertir(int arr[],int n){
    int j,h=n-1;
        for(int i=0;i<n/2;i++){
            j=arr[i];
            arr[i]=arr[h];
            arr[h]=j;
            h=h-1;
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
