# include<iostream>
# include <string>
using namespace std;

string strcheatCode(string str){
  string cheatCode = "";
  if(str.length() < 5)return str;
  else return (string(1 , str[0])+to_string(str.length()-2)+string(1 , str[str.length()-1]));

  /*
  string(count , char) : passing a char and count rep how many times the given char 
  is addnig in the string, basically a poper way of converting char to string

  str[index] : returns the char at that perticular index, although we can use 
  the inbuilt str.at(index) function

  to_string( obj ) : converts the given interger( in our case) to string, as the name suggets.
  */
  
}

int main(){
    string name = "AyushTiwaryIsGreat";
    cout << strcheatCode(name) << endl;
    return -1;
}
