/************************************
Relational operators in c++
************************************/
#include<iostream>
using namespace std;

int main(){
 
 int var_1 = 30;
 int var_2 = 20;
 //equal eaual == checks if both values are equal 
 if(var_1 == var_2)
  cout<<"Equal"<<endl;
 //not eaual != checks if both values are not equal 
 if(var_1 != var_2)
  cout<<" Not Equal"<<endl; 
 //greater than >
 if(var_1 > var_2)
  cout<<var_1<<" greater than "<<var_2<<endl;
  //less than <
 if(var_2 < var_1)
  cout<<var_2<<" less than "<<var_1<<endl;
 //greater than or equal >=
 if(var_1 >= var_2)
  cout<<var_1<<" greater than or equal to "<<var_2<<endl;   
  
  //less than or equal <=
 if(var_2 < var_1)
  cout<<var_2<<" less than or equal to "<<var_1<<endl;



}
