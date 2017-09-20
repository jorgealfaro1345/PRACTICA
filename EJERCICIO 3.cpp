#include <iostream>

using namespace std;
int invertir(int arr[],const int n){
        for(int i=n;i>=0;i--){
            cout<<arr[i];
        }
}

int main()
{
    int areglo[]={1,2,3,4,5};
    invertir(areglo,4);


}
