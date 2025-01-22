#include <iostream>
using namespace std;

void pnd(int rv){
    int num=123;
    int orignal=num;
    while(num!=0){
        rv=rv*10+num%10;
        num=num/10;
    }
    cout<<rv;
   
}
int main(){
    int num= 123;
    int orignal= num;
    int rv;
    while(num!=0){
        rv=rv*10+num%10;
        num=num/10;
    }
    cout<<rv;
}