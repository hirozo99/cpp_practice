#include <iostream>
using namespace std;

//count関数の宣言
void count();

int a = 0;

//main関数
int main()
{
   for(int i=0; i<5; i++)
      count();

  return 0;
}

//count関数の定義
void count()
{
   int b = 0;
   static int c = 0;

   cout << "変数aは" << a << "変数bは" << b << "変数cは" << c << "です。\n";

   a++;
   b++;
   c++;
}
