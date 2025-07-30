/*
Some programs regarding patterns to get the pactice of loops..
*/
# include <iostream>
using namespace std;
void pattern01(){
    for(int row = 1; row <= 5 ; row ++){
         for(int col = 1; col <= row; col++ ){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern02(){
    
}


int main(){
    pattern01();
    return 0;
}
