#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
const int MAX = 1000000;
int prefix[MAX + 1];

void buildPrefix() 
{ 
    bool prime[MAX + 1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p = 2; p * p <= MAX; p++) { 
        if (prime[p] == true) { 
            for (int i = p * 2; i <= MAX; i += p) 
                prime[i] = false; 
        } 
    } 
    prefix[0] = prefix[1] = 0; 
    for (int p = 2; p <= MAX; p++) { 
        prefix[p] = prefix[p - 1]; 
        if (prime[p]) 
            prefix[p]++; 
    } 
} 
 
int query(int L, int R) 
{ 
    return prefix[R] - prefix[L - 1]; 
} 
  
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    buildPrefix(); 
    
    int t;
    cin>>t;
    for(int g=0;g<t;g++)
    {
        long long int x,y;
        cin>>x>>y;
        int L = 1, R = x;
        if((query(L, R))>y)
        cout<<"Divyam"<<"\n";
        else
        cout<<"Chef"<<"\n";
    }
  
    return 0; 
} 
