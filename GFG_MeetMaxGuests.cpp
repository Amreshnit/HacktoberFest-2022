
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	int main()
	{
		std::ios::sync_with_stdio(false);
		int T=1;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			int arr[]={900,600,930,940};
			int dep[]={1000,800,1030,950};
			int n=4;
			sort(arr,arr+n);
			sort(dep,dep+n);
			int i=1,j=0,cnt=1,res=0;
			while(i<n&&j<n){
				if(arr[i]<dep[j]){
					cnt++;i++;
				}
				else{
					cnt--,j++;
				}
				res=max(res,cnt);
			}
			cout<<res<<endl;
		}
		return 0;
	}
