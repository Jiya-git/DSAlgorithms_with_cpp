#include<iostream>
using namespace std;
    
void pattern01(){
    for(int row = 1; row <= 5 ; row ++){
         for(int col = 1; col <= row; col++ ){
            cout << "* ";
         }
         cout<< endl;

    }
} void pattern02(){
    for(int i=1; i<=4; i++){
        char ch= 'A';
        for (int j=0; j<4; j++){
            cout<< ch;
            ch=ch+1;
        }
        cout<<endl;
    }
} void pattern03(){
    int num=1;
    for (int row=1; row<=4; row++){
        for (int colm=1; colm<=4; colm++){
            cout<< num<< "\t";
            num+=1;
        }
        cout<<endl;

    }
} void pattern04(){

    for(int row=1; row<5; row++){
        for(int colm=1; colm<=row; colm++){
           cout<< row;
        }cout<<endl;
        
    }
} void pattern05(){
    for(int i=1; i<=4; i++){
        for(int j=i; j>0; j--){
            cout<< j;
        }
        cout<< endl;
    }
} void pattern06(){
    int num=1;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<< num;
            num++;
        }
        cout<<endl;
    }
}
int main(){
    //pattern01();
    //cout<< endl;
    //pattern02();
    //cout<< endl;
    //pattern03();
    //cout<< endl;
    //pattern04();
    //cout<< endl;
    //pattern05();
    pattern06();
    return 0;
}