/*
WAP to check weather the number is prime or not..
*/
# include <iostream>
using namespace std;
int main(){
    int i=2, n;
    cout<<"Enter the number you want to check: ";
    cin>> n;
    bool isPrime=true;
    for(i ; i<=n-1 ; i++ ){
        if (n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"the number entered is prime";
    } else{
        cout<<"the number entered is non prime";
    }
}
   

