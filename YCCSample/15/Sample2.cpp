#include <iostream>
#include <string>
using namespace std;

//Car�N���X�̐錾
class Car{
   private:
      int num;
      double gas;
      char* pName;
   public:
      Car(const char* pN ,int n, double g);
      ~Car();
      void show();
};

//Car�N���X�����o�֐��̒�`
Car::Car(const char* pN ,int n, double g)
{
   pName = new char[strlen(pN)+1];
   strcpy(pName, pN);
   num = n;
   gas = g;
   cout << pName << "���쐬���܂����B\n";
}
Car::~Car()
{
   cout << pName << "��j�����܂��B\n";
   delete[] pName;
}
void Car::show()
{
   cout << "�Ԃ̃i���o�[��" << num << "�ł��B\n";
   cout << "�K�\�����ʂ�" << gas << "�ł��B\n";
   cout << "���O��" << pName << "�ł��B\n";
}

//Car�N���X�̗��p
int main()
{
   Car car1("mycar", 1234, 25.5);
   car1.show();

   return 0;
}
