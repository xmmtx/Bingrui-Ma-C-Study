#include<iostream>
using namespace std;
main()
{
	int s,gw,sw,bw,qw,n;
    cin>>s;
    gw=s/1%10;
	sw=s/10%10;
	bw=s/100%10;
    qw=s/1000%10;
    n=0;
	if(gw==7)
	{
		n=n+1;
	}
	if(sw==7)
	{
		n=n+1;
	}
	if(bw==7)
	{
		n=n+1;
	}
	if(qw==7)
	{
		n=n+1;
	}
	cout<<n;
} 
