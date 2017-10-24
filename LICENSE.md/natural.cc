//programa que sume los primeros numeros naturales
#include <iostream>
using namespace std;

int main(){
 long N;
 long sum=0;
 cout<<"inserte un numero natural"<<endl;
 cin>>N;
 for(long i=1; i<=N; i++)
   {
    sum=sum+i;
   }
 cout<<"La suma es"<<sum<<endl;
 return 0;
}
