#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];

    cout << "文字列(英数字)を代入してください。\n";

    cin >> str;

    cout << "文字列の長さは" << strlen(str) << "です。\n";

    return 0;
}
