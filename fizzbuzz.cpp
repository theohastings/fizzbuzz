#include <iostream>
using namespace std;
int main(){ 
    int i;
    int a=0;
    int b=0;
    for(i=1;i <= 100; ++i)
    {
        if(i/3!=a && i/5!=b){
            cout<<"fizz buzz\n";
            ++a;
            ++b;
        }
        else if(i/3!=a){
            cout<<"fizz\n";
            ++a;
        }
        else if(i/5!=b){
            cout<<"buzz\n";
            ++b;
        } 
        else{
            cout<<i<<"\n";
        }
        
        
    }
}
