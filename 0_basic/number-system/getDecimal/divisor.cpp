#include<iostream>
using namespace std;
int main()
{
    int biNo, decimalNo=0, i=1, rem;
    // cout<<"Enter any Binary Number: ";
    // cin>>biNo;
    // biNo = 0b11111;//! not work
    while(biNo!=0)
    {
        rem = biNo%10;
        decimalNo = decimalNo + (rem*i);
        i = i*2;
        biNo = biNo/10;
    }
    cout<<"\nEquivalent Decimal Value = "<<decimalNo;
    cout<<endl;
    return 0;
}