#include <vector>
    #include <list>
    #include <map>
    #include <set>
    #include <deque>
    #include <queue>
    #include <stack>
    #include <bitset>
    #include <algorithm>
    #include <functional>
    #include <numeric>
    #include <utility>
    #include <sstream>
    #include <iostream>
    #include <iomanip>
    #include <cstdio>
    #include <cmath>
    #include <cstdlib>
    #include <cctype>
    #include <string>
    #include <cstring>
    #include <ctime>
    #include <stdarg.h>
    typedef unsigned int uint;
    typedef long long int64;
    typedef unsigned long long uint64;
    using namespace std;
    inline void scan(int *a)
    {
    char c = 0;
    while(c<33)
    c = fgetc_unlocked(stdin);
    *a = 0;
    while(c>33)
    {
    *a = *a*10 + c - '0';
    c = fgetc_unlocked(stdin);
    }
    }
    inline void scan_uint(uint64 *a)
    {
    char c = 0;
    while(c<33)
    c = fgetc_unlocked(stdin);
    *a = 0;
    while(c>33)
    {
    *a = *a*10 + c - '0';
    c = fgetc_unlocked(stdin);
    }
    }
    int n,k,test;
    inline int Calc(int x,int y,int mad)
    {
    int tmp=x,ans=1;
    for (;y;y>>=1)
    {
    if (y&1) ans=((long long)ans*tmp)%mad;
    tmp=((long long)tmp*tmp)%mad;
    }
    return ans;
    }
    int main()
    {
    for (scan(&test);test--;)
    {
    scan(&n);scan(&k);
    int mad=1;
    for (int i=1;i<=k;++i) mad*=10;
    long double t=n*1.0*log10l(n*1.0);
    long long len=(long long)(t)+1;
    int ans=Calc(n,n,mad);
    long long kk=len-k;
    long double x=pow(10,t-(long double)kk);
    // double x=exp(log(10.0)*(t-(double)kk));
    printf("%d ",(int)(x));
    for (mad=mad/10;mad>1 && ans<mad;mad=mad/10)
    printf("0");
    printf("%d\n",ans);
    }
    return 0;
    }
