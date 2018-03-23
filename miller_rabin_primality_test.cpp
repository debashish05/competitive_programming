//Miller rabin primality test
/* 	
	Author :- Debashish Roy
	time complexity O(40*log^3(n))
	space complexity O(1)
	chances of error (1/4)^40 i.e. 1 in 10^24
*/
#include<iostream>
#include<cmath>
#define ull unsigned long long int
using namespace std;
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
//modular exponentiation log(y) time returns x^y%p
ull power_mod(ull x,ull y,ull p)	
{
    ull res=1;
    x=x%p;
    while(y>0)
    {
        if(y%2==1)res=mul_mod(res,x,p);
        y=y/2;
        x=mul_mod(x,x,p);
    }
    return res%p;
}
bool miller_rabin(const ull n)
{
	if(n<2)return false;
	if(n==2 || n==3)return true;
	if(n%2==0 || n%3==0 || n%5==0)return false;
	ull d=n-1;
    while(d%2==0)d/=2;
    for(int i=1;i<=40;++i)
    {
    	bool ch=true;
    	ull a=2+rand()%(n-4),temp=d;// a random value in range [2,n-2]
    	ull x=power_mod(a,temp,n);//a^temp%n
    	if(x==1 || x==n-1)continue;
    	while(temp!=n-1)
    	{
        	x=mul_mod(x,x,n);//avioding overflow
        	temp*=2;
        	if(x==1)return false;
        	if(x==n-1){
        		ch=false;
        		break;
        	}
    	}
    	if(ch)return false;
    }
    return true;
}
int main()
{
	ull n;
	cin>>n;	
	if(miller_rabin(n))cout<<"True";
	else cout<<"False";
	cout<<"\n";
	return 0;
}