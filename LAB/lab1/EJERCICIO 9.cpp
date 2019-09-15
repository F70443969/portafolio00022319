#include<iostream>
#include<math.h>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;

int i=0, n= 0, x=0, r=0, suma=0;

void pedirdatos();
int recursion(int n);

int main(){
    
    cout<<"Sumatoria de x^i"<<endl;
    pedirdatos();
    cout<<"El resultado de la sumatoria es:  "<<recursion(i)<<endl;
    
    getch();
    return 0;
}

void pedirdatos(){
    cout<<"Digite el valor de x"<<endl;
    cin>>x;
    cout<<"Digite el valor de i"<<endl;
    cin>>i;
}

int recursion(int i){
if(i==0){return 1;}
else{
    i = pow(x,recursion(i-1)) + suma;
    return i;
    
}
}
