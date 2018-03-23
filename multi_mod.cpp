#include<iostream>
#include<cmath>
using namespace std;
#define ull unsigned long long int
//returns (a*b)%c
ull mul_mod(ull a,ull b,ull c){
    ull x=0,y=a%c;
    while(b>0){
        if(b%2==1)x=(x+y)%c;
        y=(y*2)%c;
        b/=2;
    }
    return x%c;
}
int main()
{
	ull a,b,c;
	cin>>a>>b>>c;
	cout<<mul_mod(a,b,c)<<"\n";
	return 0;
}