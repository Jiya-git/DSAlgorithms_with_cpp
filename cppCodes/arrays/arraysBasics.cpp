# include <iostream>
using namespace std;
void SmallestNums(){
   int nums[]= {5,32,12,6,-6,8};
   int size= 6;
   int smallest = INT_MAX;
   for (int i=0; i< size; i++){
    if (nums[i]< smallest){
        smallest= nums[i];
    }
   }
   cout << smallest<< endl;
}
int LargestNums(int nums[] , int size){
    int largest= INT_MIN;
    for (int i=0; i< size; i++){
        if (nums[i]>largest){
            largest= nums[i];
        }
    }
    return largest;
}
int main(){

    int nums[]={6,7,54,100,5,4};
    int ans = LargestNums(nums , 6);
    return 0;
}