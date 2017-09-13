#include <iostream>

using namespace std;

int main(){
    int numero;
    for(int x=1;x<21;x++){
        for(int i=1;i<100000;i++){
            if(i%x==0){
                numero=x;
            }
        }
    }
    cout<<"el numero es: "<<numero<<endl;
}
