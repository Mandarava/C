#include <cstdlib>  
#include <iostream>  
 
using namespace std;  
#define N 20			//修改产生随机数的个数，越多越准确  
typedef long long LL;  
LL random(LL n)  
{  
    return (LL)((double)rand()/RAND_MAX*n+0.5);  
}  
LL multi(LL a, LL b, LL m)// a*b%m  
{  
    LL ret=0;  
    while (b)  
    {  
        if (b&1) ret=(ret+a)%m;  
        b>>=1;  
        a=(a<<1)%m;  
    }  
    return ret;  
}  
LL quick_mod(LL a, LL b, LL m)//(a^b)%m  
{  
    LL ans=1;  
    while (b)  
    {  
        if (b&1) ans=multi(ans, a, m);  
        b>>=1;  
        a=multi(a, a, m);  
    }  
    return ans;  
}  
bool miller_rabin(LL n)//判断是不是素数  
{  
    for (int i=1; i<=N; i++)  
    {  
        LL a=random(n-2)+1;  
        if (quick_mod(a, n-1, n)!=1)//是否符合费马小定理，不符合直接return false  
            return false;  
    }  
    return true;  
}  
int main()
{
	LL a;
	cin>>a;
	if (miller_rabin(a))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
