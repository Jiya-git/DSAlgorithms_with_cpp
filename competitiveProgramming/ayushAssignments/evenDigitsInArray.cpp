#include<iostream>
#include<math.h>
using namespace std;

int countDigits(int nums){
    // using better approch
    
    int countDig = 0; // return tis at last 
    while(nums != 0){
        countDig = countDig +1;
        nums = nums/10;
    }
    return countDig;
}

bool isEven(int num){
    int digit = countDigits(num); // cheak for the number coming from array that 
    //is it have even number of DIGITS  
    if(digit % 2 == 0) return true;
    else return false;
}

void countEven(int arr[]){
    int size = 5;
    int countForEven = 0; // cout this at last 
    for(int i = 0; i < size ; i++){
        if(isEven(arr[i])) countForEven += 1;
    }
    cout<< countForEven << endl;
}

// we create the main() just for testing our code.
int main(){
    int arr[] = {28,246,976,2840,560};
    countEven(arr);
}