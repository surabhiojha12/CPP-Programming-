/************************************
Bitwise operators in c++
************************************/
#include<iostream>
using namespace std;

int main(){
 
 int var_1 = 3;
 int var_2 = 4;
 //bitwise and operator &
 cout<< (var_1 & var_2)<<endl;
 
  //bitwise or operator |
 cout<<(var_1 | var_2)<<endl;
 
  //bitwise xor operator ^
 cout<<(var_1 ^ var_2)<<endl;
 
   //bitwise complement operator ~
 cout<< (~var_1) <<endl;
 
  //bitwise left shift operator <<
 cout<< (var_1<< 2)<<endl;
  //bitwise right shift operator >>
 cout<< (var_1>> 2)<<endl;
  

}
