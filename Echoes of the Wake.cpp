#include<iostream>
#include<cmath>
using namespace std;
int a, b, c, d = 0;

int f(int x)
{
    int y = 0;
    y = a*pow(x, 3) + b*pow(x, 2) + c*x + d;
    return y;
}

int main()
{
    cin >> a >> b >> c >> d;
    //初始化
    char map[22][12];
    for(int i = 1; i <= 21; i++)
    {
        for(int j = 1; j <= 11; j++)
        {
            map[i][j] = ' ';
        }
    }
    for(int i = 1; i <= 21; i++)
    {
        map[i][6] = '|';
    }
    for(int j = 1; j <= 11; j++)
    {
        map[11][j] = '-';
    }

    //算函数值，替换函数图
    int fvalue = 0;
    for(int i = -5; i <= 5; i++)
    {
        fvalue = f(i);
        if(fvalue >= -10 && fvalue <= 10)
        {
            map[11 - fvalue][i + 6] = '+';
        }
    }

    //输出
    for(int i = 1; i <= 21; i++)
    {
        for(int j = 1; j <= 11; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }
    //感觉可以再优化。。。
    return 0;
}