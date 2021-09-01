  #include<iostream>
  #include <bits/stdc++.h>
  #include<string>
  #define ll long long
  #define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  using namespace std;
  int main()
  {
      int i,n,d=0;
      bool flag=true;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
        cin>>a[i];
      while(flag)
      {

          if(a[0]==0 || a[n-1]==0) break;
          for(i=n-1;i>=0;i--)
            {
              a[i]--;
              if(a[i]<=0&&a[i-1]<=0) flag=false;
            }

            d++;
      }
      cout<<d;
  }

