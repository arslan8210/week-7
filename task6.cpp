#include<iostream>
using namespace std;
int primorial(int num);
bool prime(int num);
main()
{
int num;
cout<<"Enter the number: ";
cin>>num;
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
int primorial(int num)
{

int count,number,product;
count=1;
number=2;
product=1;
while(count!=num)
{
if(prime(number)) 
{
product=product*count;
count++;
}

}


}