# include <iostream>
using namespace std;


int countDig(int num){
    int count = 0; 
    if (num = NULL) return -1;
    while (num != 0){
        count += 1;
        num /= 10;
    }
    return count; 
}
bool oddDigit(int num){
    if (countDig(num) % 2 ==1) return true;
    else return false;
}
void oddCount(int arr[]){
    int oddCountDig = 0;
    int size = 5;
    for (int i=0; i<size; i++){
        if (oddDigit(arr[i]) == true){
            oddCountDig += 1;
        }
    }
    cout << oddCountDig << endl;
}
int main(){
    int arr[] = {};
    oddCount(arr);
    return 0;
}