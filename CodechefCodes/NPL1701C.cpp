#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isprime(int n){
    int limit=sqrt(n);
    for(int i=2;i<=limit;++i){
        if(n%i==0)return false;
    }
    return true;
}
int num(int n){
    int limit=(int)sqrt(n);
    for(int i=2;i<=limit;++i){
        if(n%i==0){n/=i;return(n);}
    }
}
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int i,t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        int input;
        for(i=0;i<n;++i){
            cin>>input;
            if(!isprime(input))
            a.push_back(input);   //put non prime number in array
        }
        int win=0,size=a.size();
        //take one element make it multiple one prime and another any
        //cout<<size;
        //for(i=0;i<size;++i)cout<<a[i]<<" ";
        //int j=0;
        for(i=0;i<size;++i){
            int temp=num(a[i]);
            //cout<<temp;
            if(!isprime(temp)){a[i]=temp;--i;}
            win=1-win;
            //for(j=0;j<size;++j)cout<<a[i]<<" ";
        }
        if(win==0)cout<<"Friend";
        else cout<<"Appu";
        cout<<"\n";
    }
    return 0;
}
