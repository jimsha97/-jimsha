

#include <iostream>

using namespace std;

int main()  
{  
  int n,r,num=0,temp;    
  cout<<"Enter the Number=";    
  cin>>n;    
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 num=(num*10)+r;    
 n=n/10;    
}    
if(temp==num)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}  


