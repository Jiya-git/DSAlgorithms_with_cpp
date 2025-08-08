#include<iostream>
using namespace std;

int watermelonCut(int w){
    /*int pieces =0;
    while (w % 2 == 0){
        pieces += 1;
        w = w / 2;
    }
    return pieces;*/

    if( w <= 0) return -1;
    if(w  % 2 ==1) return 0;

    int count = 0;
    while(w>0){
        if(w % 2 == 0){
            count+=1 ;
            w = w/2;
        }else break;
    }
    return count;
}
int main(){
    cout <<"number of pieces  " << 2*watermelonCut(12) << endl;
}