//题目：蜗牛爬树
//有一颗光滑的葡萄树高17米，一只蜗牛从底部往上爬，每分钟爬3米，但每爬一分钟休息一分钟，休息期间下滑1米。
//编写程序，计算蜗牛需要多少分钟才能爬到树顶，输出需要的时间。
#include<iostream>
using namespace std;
main()
{
  int h,t;
  h=0;
  t=0;
  while(h<17)
  {
    h+=3;
    t++;
    if(h<17)
    {
      h--;
      t++;
    }
  }
  cout<<t;
}
