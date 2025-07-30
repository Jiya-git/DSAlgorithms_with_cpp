/*
WAP to give the sum of all the number between 1 to n;
*/
# include <iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<< "Enter i: ";
    cin>> i;
    cout<< "Enter n: ";
    cin>> n;
    for (i ; i<=n; i++){
        sum += i;
    }
    cout<< sum;
    return 0;
}
