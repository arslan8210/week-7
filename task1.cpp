#include<iostream>
using namespace std;
main()
{
int rowsize,col,row;
cout<<"Enter the desired numbers of rows:" ;
cin>>rowsize;
for( rowsize;rowsize>=1;rowsize--)
{
for(int col=rowsize;col>=1;col--)
{

    cout<<"*";
}

cout<<endl;
}

}
