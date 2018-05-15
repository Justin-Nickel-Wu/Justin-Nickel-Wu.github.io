#include <cstdio>
#include <algorithm>
#include <cstring>
#include <ctype.h>
#include <windows.h>
#include <string>
using namespace std;
const int maxL=100;
int num,len,p,x;
string ss;
char s[maxL],tmp[maxL];
int main(){
	freopen("name.txt","r",stdin);
	for(;;){
		memset(s,0,sizeof(s));
		scanf("%s",s+1);
		if (s[2]==0)
			break;
		ss="rename ",len=strlen(s+1);
		for (int i=1;i<=len;i++){
			if (s[i]=='.')
				p=i;
			ss=ss+s[i];
		}
		ss=ss+' ',num++,x=num,len=0;
		do
			tmp[++len]=x%10+'0',x/=10;
		while (x);
		for (int i=len;i;i--)
			ss=ss+tmp[i];
		while (s[p]!=0)
			ss=ss+s[p],p++;
		system(ss.c_str());
//		printf("%s\n",ss.c_str());
	}
	return 0;
}
