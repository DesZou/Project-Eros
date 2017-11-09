//%std
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
#define lovelive long long
/*
UjuUuUuUuUjuuujuJujuJjLL777Y1NEMB@B@@@B@MM8GP1LvrvvJYjJuYuYuJjJuJjYjJuJuJY
UYujujujuJuJuJuYjJJYJv77JFMB@BBB@B@MBBBBBMMB@B@MEuL7vLYLYLjYjYJLJLJYjLuJjv
uLjujuJjYuYJYJYJLJLLr7uOB@@MZ0ZOEEEGN00GGZq08E0MB@BGL77LLLLYLJLYLJLJLJLJJv
uvuYuYJYJLJYJLYLYLv;LM@B@O8EZEON0SPXS1NqPF5SPXEOXF8OMEYr7vLLYLLvLLLLLLYLY7
YvJJYJYJLYLYLYLLvLiuB@MBOO88ZGqkSSJL777L7vr7vJJS51NqkZMFr7vLvLvLvLvYvLvLL7
J7JLYLJvLvLvLvLvviuB@O8PN0Nk5JJLL77iiii:i:i:i:ii7Y1XZFqBMi77LvLvLvLvLvLvL7
LvLLvLvYLLvLvLvviY@@OO0k15JuL77L77rrrrrriii;i;ii:iiLkE10BN:77v7vvvvLvvvLv7
L7YvLvLvLvvvLvvi7B@BMGquJu2JLvv77r7iriiiiii:ii;iiiiiL5kSMBJi77v7v7v7v7v7Lr
v7vL7Lvvvv7v7vriB@BBMOk2jF52LL7v77r7rriiii:::::i:iiirJF0O@Oirv7v77777v7vvr
Yrv7v7v7v7v777iL@BBMMONUuXX1uv77Lrrr7riiii::i:::::iir7UEMB@ir77777777777vr
vr7v7v77777777:XB@MBO8X150k5jL7777i;iii;ir;;:i:::iirirjPM@O:;7r7r777r7777r
vrv7777r777r7r:q@BBMMGXSqkS2J7v7rii:::iii;i:,,::::;i;r2PBB0:rr7r7rrr7r7r7i
7r7777r7r7r7rr:vB@BBM8q0SXN8qXSPSX2L::r::rii;rr;i7ri:7vEB@u:;rrrrrrrrrr7ri
7i7r7rrrrrrrr;r,XB@BBM8XqOM0X1Jr77vuXu; :qqFSjv7YUqSv:J8@Bi:r;ririr;rrrr7:
rir7rrrrrr;r;ri:iBB@BB@OM@FXXqkPk5L::@MSBB15FFJr:::70MZ@Bu,ii;iri;iririrri
7irrr;riririri;:7ONZOXkk@S0EZGZ8Zu8ZjM@B@i5EMBM0Xvr:rBPPM::i;iiiii;i;i;ir:
ri;riri;iii;i;i:iMkSPPFkMjuuLL7riii2O@v.BL:j7i,,i77i:@r:Ui:i:iiiiiiiiiiii:
r:riii;i;iiiiii::ZEkNXX182v7Lrr;riiX@q: 7BrrJLvriir:r8i:v:::i:i:i:iiiiiii:
i:i;iiiiiiii:ii:.uG0FqkkX0U2Yvrii7N@GL:. u@virii,::;FYi7i::::i:i:i:i:i:ii:
i:iiiii:i:i:i:i:,:M0PXPXXXXFkFkFFOGuNUi,,,7PZE0S1UUvvr;;::::::::i:::::i:i:
i::i:i:i:i:i:::i:.FESqPNqN1v;i::YZ0@B@8Fk@1irJJvr7::r7:i:::::::::::::::::,
i,i:i::::::::::::.7O0XqXqqGN5JuY22XkqPS7iii:.:7JL7v77ri::::::::::::::::::.
:,::::::::::::::::.i00XPXP0Pk05kULii:,.:...:iiru2Y7r77:::::::::::::::::::,
:.::::::::::::::::. 0ENPqPPv70GZ05uujrriii77vLJ7riiiLi.,:,:,:,:::::::,:::.
:.::::::::::,:,:::. 2OX0PNX5:LMMOBB@MMMO8O057Lv7iri7L:.,,:,:,:,:,:,:,:,::.
:.:::,:,:,:,:,:,,,, :EqP0PNqjr2F12ULv7rriii:::rrrr7ur.,,,,:,:,:,,,,,,,:,:.
:.,:,:,:,:,:,,,:,,.  ZPkP0q8Nui25UjuLLLL7riiiiiLLJ2L ..,,,.,.,.,,,.,.,,,,.
:.:,,,,,,,,,,.,...  OB5kqN00OEL7FL7r7;ri::::i:rvJUv ......,.,.,.,.,.,.,.,
,.,,,,.,.,.,..     MB@PLqZNZZMZ5JUvriiii,::i:vu5ur  .......,.....,...,.,.
, ,.,.,....     .:@B@B@N75OZZGMOGX0XuvJYLvLLU1F2i     . ................,
. .,....    :S@@B@B@BBB@Or;P8MOMOO8OZGOBMO0qF1u7Jr,.       . ............
. ...    .U@@@@@@B@BBM@@@BL,ru0OM8E0GGG00kSkqk7.@B@B@MX7,       . .......
       rO@B@B@B@BBM@BBB@B@BE::i7uN8MEEX2LYYU7.  B@M@B@B@B@EJ:          ..
  :vZB@B@BMOOMBMBMBB@MBB@B@BBriii::iLuu7:,,     @MOOMOMMB@@B@BM5r
G@B@B@BBMMOOOMOMMBMBMBMBMBB@B@:,,.    2EqUv    iBM8O8OOMOOOMM@B@B@BX;
@BBMMMMOM8M8MOMOMM@OMMMMBMBM@BO  .  UO0FFEGBZ  :@MOGO8OOO8M8O8MOMM@B@BBJ.
MMMMOMOMOM8OOMOOMBBBMMMMMMMMMBBM  5@@@OquLS@BE  B@8O8OOOOO8OOOOOGOOMM@@@BO
MOMOMOMOMOMOMMMOMM@MMMMOMOBMMMMBM FMEB@OZLO0uBk qBM8O8MGO8OOMOO8OOOGOOMOBB
OMOMOMOMOMOOOMOOOBBBOMOBMMOMOOOBB0 rLrS@BEO    i2@MO8OOO8O8MOM8OOM8OGOGOOO
OOMOMOMOMOMOOOMOMB@OMOMOMOMOMOMOBBk Ur:O@EX7   .FOBOO8O8O8O8OGOOO8O8O8OGOG
OOOMOMOMOMOMOOOMO@BBMBMMMMOMOMOOMBB2 XEB8EXM    SMMM8O8OOO8O8MOMOO8O8OGOGO
MOMOMOMOMOMOMOM8OOBB@B@B@OOOMOOOMMBB7L@ZMOYZM. .5ZBOOOMOO8OOMOMOOGOOO8OGOZ
MBOM8OOMOMOMMMOM8O8OOMB@MOOMOMOMOMOBBOZMOZPu0M.YuSBMOM8OOOOO8OOMOO8O8OGOGO
@MBOMOOOMOMOMMMOMOM8OZ@MO8MOMOMOOOMOMMMOOEjFPFGMqJ@OMOO8O8MOMOOOM8O8O8O8OZ
OBBBOOOMOMOMOMOMOMMM8MMMOMOMOMOOOMOMOMOBM1X1SkjOOFMOOO8OOMOOOOOO8O8OGO8O8O
���������Ż��Ͷ���
*/
const lovelive mod=1e9+7;
void read(lovelive &x)
{
  x=0;
  char c=getchar();
  while(c<'0'||c>'9')
    c=getchar();
  while(c<='9'&&c>='0')
  {
  	x=x*10+c-48;
  	c=getchar();
  }
}
int rd[500050],tot;
queue<int> sp;
int f[500050];
lovelive va[500050],lens[500050],rech[500550],to[500050],siz[500050],len[500050];
void tpsort(int n)
{
  for(int i=1;i<=n;i++)
    if(!rd[i])
      sp.push(i);
  int p;
  while(!sp.empty())
  {
  	p=sp.front();
  	sp.pop();
  	rd[to[p]]--;
  	if(!rd[to[p]])
  	  sp.push(to[p]);
  }
}
void dfs(int i)
{
  if(rech[i])
    return;
  if(!rech[to[i]])
    dfs(to[i]);
  rech[i]=rech[to[i]];
  va[i]=len[i]*rech[i]+va[to[i]];
  rech[i]++;
  va[i]%=mod;
  return ;
}
int main()
{
  freopen("road.in","r",stdin);
  freopen("road.out","w",stdout);
  lovelive ans=0,x,y,n;
  read(n);
  for(int i=1;i<=n;i++)
    read(to[i]),read(len[i]),rd[to[i]]++;
  tpsort(n);
  for(int i=1;i<=n;i++)
    if(rd[i]&&(!f[i]))
    {
	  f[i]=++tot;
	  siz[tot]=1;
	  lens[tot]=len[i];
  	  x=to[i];
  	  while(x!=i)
  	    {
  	      f[x]=tot;
  	      lens[tot]+=len[x];
  	      ++siz[tot];
  	      x=to[x];
  	    }
  	  lens[tot]%=mod;
    }
  for(int i=1;i<=n;i++)
    if(f[i]&&(!rech[i]))
    {
      x=i;
      y=siz[f[i]]-1;
      while(to[x]!=i)
      {
      	va[i]+=len[x]*y;
      	--y;
      	va[i]%=mod;
      	x=to[x];
      }
      x=i;
      rech[x]=siz[f[x]];
      while(to[x]!=i)
      {
      	va[to[x]]=va[x]+lens[f[i]]-(siz[f[i]]*len[x]%mod);
      	va[to[x]]%=mod;
		rech[to[x]]=siz[f[x]];
      	x=to[x];
      }
    }
  for(int i=1;i<=n;i++)
    dfs(i);
  for(int i=1;i<=n;i++)
  {
  	ans+=va[i];
  	ans-=n-rech[i];
  }
  if(ans<0)
    ans+=mod;
  cout<<ans%mod;
}