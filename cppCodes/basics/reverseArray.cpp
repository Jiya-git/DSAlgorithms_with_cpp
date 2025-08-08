# include <iostream>
using namespace std;
void swap( int a, int b){
    int temp = a;
    a=b;
    b = temp;
    cout<< a << " ";
    cout<< b; 
}
void arrayRev(int arr[], int sz){
    int start= 0; int end = sz-1;
    while (start < sz){
        swap (arr[start], arr[end]);
        start ++; end--;
    }
}

int main(){
    int arr[]= {4,2,7,8,1,2,5};
    int sz=7;
    arrayRev(arr,sz);
    for(int i=0; i < sz; i++ ){
        cout<<arr[i]<< " ";
    }
    cout<< endl;
    swap(5, 6);
}