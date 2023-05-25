#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
    
    int mx=max(a,max(b,c));
    int mn=min(a,min(b,c));
    int md=0;
    if(a==mx && b==mn || (a==mn && b==mx))
 {   md=c;}
    else if((b==mx && c==mn)||(b==mn && c==mx))
   { md=a;}
    else
  {  md=b;}
    
    int x=(mx-md)/2;
    int y=mx-(mn+x);
    
   if(a==b && b==c && a==c)
   {
       cout<<0<<endl;
       continue;
}

	    
	   if((a%2==0&&b%2==0&&c%2==0 ) || (a%2!=0&&b%2!=0&&c%2!=0))
	    {
	       if((mx==a && mx==b) || (mx==b && mx==c) || (mx==a && mx==c)  )
	       {
	           cout<<mx-mn<<endl;
	       }
	        
	        else if(a==b || c==a || c==b)
	        {
	        cout<<(mx-mn)/2 <<endl;
	        }
	        else{
	         cout<<y<<endl;
	        }
	        
	        
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	    
	}
	
	
	return 0;
}
