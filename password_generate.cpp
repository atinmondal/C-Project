#include<bits/stdc++.h>
using namespace std;

#define lop(i,n) for(ll i=0;i<n;i++)
#define lop1(i,n) for(ll i=1;i<=n;i++)
#define lopr(i,n) for(ll i=n-1;i>=0;i--)
#define ll long long int
#define vi vector<ll>
#define pb push_back
#define all(v) v.begin(),v.end()
// #define IOS  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define en "\n"
#define F first
#define S second    
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define pii pair<int,int>
#define pll pair<ll,ll>
#define LCM(a,b) (a*b)/__gcd(a,b)
#define mii map<int,int>
#define mll map<ll,ll>
#define ub upper_bound
#define lb lower_bound
#define sz(x) (ll)x.size()
#define ld long double
#define pcnt(x) __builtin_popcountll(x)

const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_len = sizeof(alphanum)-1;

int pass(int n)
{
	if(n<4)
    {
        cout<<"Minimum password length is 4";
        
    }
    else
    {
    srand(time(0));
    cout<<"Your password is: ";
    lop(i,n)
    cout << alphanum[rand() % string_len];
    }
}
int main()
{
// ios_base::sync_with_stdio(0);
// cin.tie(0);cout.tie(0);
   
    int option;
    while(1)
    {
    	cout<<en<<"1: Password Generate";
    	cout<<en<<"2: Exit"<<en;
    	cin>>option;
    	switch(option)
    	{
    		case 1:
    			cout<<"Enter the length of password"<<en;
    			int n;cin>>n;
    			pass(n);
    			break;
    		case 2: exit(0);
    			
		}
	}
    
	
}
