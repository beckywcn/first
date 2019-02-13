#include <cstdio> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool c(int n)
{
	if(n==1) return false;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
bool m(int n)
{
	bool f;
	f= c(n);
	if(f)
	{
		int s=0;
		for(int i=1;n!=0;i++)
		{
		    s *= 10;
			s+=n%10;
			n/=10;	
		} 
		f = c(s);
		return f;
	}
	return f;
}
int main(int argc, char** argv) {
    int t=scanf("%i");
    printf("%d\n",t);
    printf("%i", m(t));
	return 0;
}
