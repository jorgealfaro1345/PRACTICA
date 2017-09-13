#include <iostream>

using namespace std;

int main()
{
    int suma=0;
    for(int x=1;x<1000;x++){
        if(x%3==0&&x%5==0){
            suma-=x;
        }
        if(x%3==0){
            suma+=x;
        }
        if(x%5==0){
            suma+=x;
        }

    }
    cout << "la suma de los multiplos de 3 y 5 menores a 1000 es: "<<suma<< endl;
    return 0;
}
