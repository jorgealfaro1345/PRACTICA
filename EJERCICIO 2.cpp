#include <iostream>

using namespace std;

int suma(const int a[],const int n)
{
    if(n==1)
    {
        return a[0];
    }else{
        return a[n-1]+suma(a,n-1);
    }
}

int main(){
    int mat[]={2,2,3,4,5};
    int n=5;
    cout<<"la suma es:"<<suma(mat,n);

}
