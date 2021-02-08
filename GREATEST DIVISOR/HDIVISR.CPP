#include <bits/stdc++.h>
using namespace std;
#define m1 1000000007
#define ll long long
#define vi vector<int>
#define mid(l, r) (l + (r - l) / 2)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
#define loopneg(i, a, b) for(int i = (a); i>= (b); i--)
#define arint(n) int ar[n]

void input(vector<int> ar, int n);
void output(vector<int> ar);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
        for(int i = 10; i> 0; i--)
        {
            if(n% i == 0)
            {
                cout<<i;
                break;
            }
        }
        cout<<endl;
	}
	return 0;
}


void input(vector<int> ar, int n)
{
    int ele;
    for(int i = 0; i< n; i++)
    {
        cin>>ele;
        ar.push_back(ele);
    }
}
void output(vector<int> ar)
{
    for(auto ele: ar)
        cout<<ele<<" ";
    cout<<endl;
}
