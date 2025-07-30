/*
WAP to print numbers thr range must be taken by the user :/ 
*/
# include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the starting point: ";
    cin>> a;
    cout<< "enter the ending point: ";
    cin >> b;
    while (a<=b){
        cout<<a<< endl;
        a++;
    }
    return 0;
}