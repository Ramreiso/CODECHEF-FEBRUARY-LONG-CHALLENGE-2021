#include <bits/stdc++.h>
using namespace std;
#define m1 1000000007
#define ll long long
#define vi vector<int>
#define mid(l, r) (l + (r - l) / 2)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
#define loopneg(i, a, b) for(int i = (a); i>= (b); i--)
#define arint(n) int ar[n]

 ll max_teamname(string str[], int n)
{
    sort(str, str+n);   
    string a, b;
    ll count = 0;

    for(ll i = 0; i< n; i++)
    {
        for(ll j = i+1; j<n; j++)
        {
            a = str[i];
            b = str[j]; 
            swap(a[0], b[0]);

            if(a[0] == b[0]){}
            else if(a == b){}
            else if(!binary_search(str, str+n, a) && !binary_search(str, str+n, b))count += 2; 
        }
    } 
    return count;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t;
	cin>>t;
	while(t--)
	{
	    ll n; cin>>n;
        string str[n];
        for(ll i = 0; i< n; i++)cin>>str[i];

        ll res = max_teamname(str, n);
        cout<<res<<endl;
	}
	return 0;
}




/*
            a = str[i];
            b = str[j]; 
            if(a[0] == b[0] || a == b){}
            else
            {
                swap(a[0], b[0]);
                if(!binary_search(str, str + n, a) && !binary_search(str, str + n, b))
                {
                    count += 2;
                }
            }
            
            a = str[i];
            b = str[j]; 
            swap(a[0], b[0]);

            if(a[0] == b[0]){}
            else if(a == b){}
            else if(binary_search(str, str+n, a));
            else if(binary_search(str, str+n, b));
            else count += 2;   
            */
