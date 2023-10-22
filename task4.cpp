#include<iostream>
using namespace std;
int checktriangle(int triange);
main()
{
    int triange,dots;
    cout<<"Enter the Triange: ";
    cin>>triange;
    cout<<"Dots in the Triangle: "<<checktriangle(triange);
}
int checktriangle(int triange)
{ 
int total = 0;
for(int i=triange;i>=1;i--)
{
total=total+i;
}
return total;
}
