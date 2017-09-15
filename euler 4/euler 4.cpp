#include <iostream>

using namespace std;
int palindromo(int n){
    int res=0;
    while(n>0){
        res+=n%10;
        res*=10;
        n=n/10;
    }
    return res/10;
}

int main(){
    int res,res2=0,palin,mult,mult2;
    for(int i=100;i<1000;i++){
        for(int j=100;j<1000;j++){
            res=i*j;
            if(res==palindromo(res)){
                    mult=i;
                    mult2=j;
                if(res>res2){
                    res2=res;
                    }
            }
        }
    }
    cout<<res2<<"::"<<mult<<"::"<<mult2<<endl;
}

