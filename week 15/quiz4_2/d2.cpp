#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,cnt;
char a[15][15];
void solve(int x,int y)
{
    if(a[x-1][y]=='1' && x-1 > 0)
    {
        a[x-1][y]='0';
        solve(x-1,y);
    }
    if(a[x+1][y]=='1' && x+1 <=n)
    {
        a[x+1][y]='0';
        solve(x+1,y);
    }
    if(a[x][y-1]=='1' && y-1 > 0)
    {
        a[x][y-1]='0';
        solve(x,y-1);
    }
    if(a[x][y+1]=='1' && y+1 <=m)
    {
        a[x][y+1]='0';
        solve(x,y+1);
    }
}
int main()
{
    cin >> n >> m;
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> a[i][j];
        }
    }
     for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='1')
            {
                solve(i,j);
                cnt++;
            }
        }
    }
    if(cnt==0)
    {
        cout << "nothing is left";
        return 0;
    }
    cout << cnt;
}