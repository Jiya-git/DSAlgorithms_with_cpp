# include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter Y/N: ";
    cin>> a;
    if( a=='Y' || a== 'y'){
        cout<< "yesss";
    }
    else if (a=='N' || a== 'n'){
        cout<< "noooo";
    }
    else{
        cout<<"invalid";
    }
    return 0;

}