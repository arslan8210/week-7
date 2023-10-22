#include<iostream>
using namespace std;
bool prime(int num);
main()
{
int num;
cout<<"Enter number: ";
cin>>num;
cout<<prime(num);
}
bool prime(int num)
{
for(int i=2;i<=num;i++)
{
if(num%i==0) 
{
return false;
}
return true;

}

}