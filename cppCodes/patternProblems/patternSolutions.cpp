#include<iostream>
using namespace std;
    
void pattern01(){
    for(int row = 1; row <= 5 ; row ++){
         for(int col = 1; col <= row; col++ ){
            cout << "* ";
        }
        cout << endl;
    }
}


int main(){
    pattern01();
    return 0;
}