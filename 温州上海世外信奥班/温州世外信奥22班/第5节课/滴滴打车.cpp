/*
题目：滴滴打车
编写程序，输入路程（千米）和停车等候的时间（分钟），计算需要支付多少打车费。
路程在2千米以内起步6元。
路程超过2千米之后按1.8元/千米。
路程超过10千米之后在1.8元/千米的基础上加价50%。
停车等候按时间，3分钟之内免费，每3分钟加收1元。 
*/
#include<iostream>
using namespace std;
main()
{
  int n,t;
  cin>>n>>t;
  float cf;
  if(n<=2)
    cf=6;
  else if(n<=10)
    cf=6+(n-2)*1.8;
  else
    cf=6+8*1.8+(n-10)*1.8*1.5;
  cf=cf+t/3;
  cout<<cf;
}
