#include <iostream>

using namespace std;

int fibonacci(int n){
    if(n == 0 || n == 1)
       return n;
    else
       return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int res=0;
    for(int n=3;n<50;n+=3){
        fibonacci(n);
        if(fibonacci(n)<4000000){
                res+=fibonacci(n);
        }
        cout<<"La suma de los fibonacci pares menores a 4 millones es: "<<res<<endl;
    }

}
