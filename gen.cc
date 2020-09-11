#include <cstdio>
#include <iostream>

#define eputs(str) fputs(str, stderr)
#define eprintf(x ...) fprintf(stderr, x)

using namespace std;

const char format[] = "https://cdn.jsdelivr.net/gh/ymd45921/shirahaoj_assets@master/nowcoder2019/%d/%c/%s.png";
const char md[] = "![%s.png](https://cdn.jsdelivr.net/gh/ymd45921/shirahaoj_assets@master/nowcoder2019/%d/%c/%s.png)";
const char part[][20] = {"desc", "in", "out"};
char buffer[10][255];

int main()
{
    freopen("out.txt", "w", stdout);
    int num, cnt;
    cerr << "num = ";
    cin >> num;
    cerr << "cnt = ";
    cin >> cnt;
    for (int i = 0; i < cnt; ++ i)
    {
        int j = 0;
        for (auto ii : part)
            sprintf(buffer[j ++], md, ii, num, 'A' + i, ii);
        for (int k = 0; k < j; ++ k) puts(buffer[k]);
        puts("");
    }
    cerr << "Generated." << endl;
    return 0;
}