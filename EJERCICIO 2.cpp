#include <iostream>

using namespace std;

int suma(const int arr[],const int n){
    int res=0;
    if(n<0){
        return 0;
    }
    else{
        res=res + arr[n];
        suma(arr,n-1);
        cout<<res<<":::";
    }
    return res;
}

int main(){
    int mat[]={2,2,3,4,5};
    int n=4;
    cout<<"la suma es:"<<suma(mat,n);

}
