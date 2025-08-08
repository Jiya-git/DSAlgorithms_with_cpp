#include<iostream>
#include<string>

using namespace std;

int search(string arr[] , string target){
    for(int i = 0 ; i < 3 ;i++ ){
        if(arr[i] == target) return i;
    }
    return -1;
}

int main(){
    string arr[] ={"Ayush" , "jiya" , "shaurya"};
    int ans = search(arr , "jiya");
    cout<< ans;
}