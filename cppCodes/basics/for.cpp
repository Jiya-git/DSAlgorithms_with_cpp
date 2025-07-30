/*
WAP to let know bout the for statement..
*/
# include <iostream>
using namespace std;
int main(){
    int i,j,add=0;
    cout<<"Enter i: ";
    cin>> i;
    cout<<"Enter j: ";
    cin>> j;
    while(i<=j){
        add = add + i;
        i= i+2;
    }
    cout<< "sum =" <<add;
    return 0;
}