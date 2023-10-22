#include<iostream>
using namespace std;
void printupperasterik(int rows);
void printlowerasterik();
main()
{
int rows;
cout<<"Enter the desired number of rows: ";
cin>>rows;
printupperasterik(rows);
printlowerasterik();


}
void printupperasterik(int rows)
{
rows=15;
for(int i=1;i<=rows;i++)
{
for(int k=1;k<=rows-i;k++)
    cout<<" ";

for(int j=1; j<=i;j++)
{
    cout<<"*";
}
cout<<endl;
}
}
void printlowerasterik()
{

for(int i=15;i>=1;i--)
{
for(int j=1; j<=15-i;j++)
{
    cout<<" ";
}
for(int k=1;k<=i;k++)
    cout<<"*";

cout<<endl;
}
}




