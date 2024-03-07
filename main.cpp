#include <iostream>
#include <iomanip>
#define Pi 3.1415926
using namespace std;

//����� ��㯯� 315, 䠪���� ���
#if 0
���ࠡ��稪 �ணࠬ�� ������殢 �.�.
����� ������୮� ࠡ��� 1
#endif

//���⪠ ���� cin
#define BUFF_CLEAR std::cin.ignore(10000, '\n')

//�㭪�� �뢮�� ����
void printMenu(void)
{
    cout<<"������ ����� ᮮ⢥����騩 �����, ���� q ���� ��� ��室�"<<endl;
    cout<<"1 - ���᫨�� ᪮���� ��אַ��������� �������� (�� ����ﭨ� � �६���)."<<endl;
    cout<<"2 - ���᫨�� �᪮७�� (�� ��砫쭮� ᪮���, ����筮� ᪮��� � �६���)."<<endl;
    cout<<"3 - ���᫨�� ࠤ��� ��㣠 (�� ����� ��� ���㦭���)."<<endl;
    cout<<"q - ��室 �� �ணࠬ��"<<endl;
}

//�㭪�� ������ � �뢮�� ᪮���
void speed(void)
{
     //���⪠ ���� ����� �᫨ ��⠫�� ����� 諠�
     BUFF_CLEAR;

     float distanceMeters;
     float timeSec;
     cout<<"������ ����ﭨ� � ����� � �६� � ᥪ㭤��"<<endl;
     cin>>distanceMeters>>timeSec;

     //���䨪��� ����� �᫨ ���� ��㭤�
     while (cin.fail())
     {
         cin.clear();
         BUFF_CLEAR;
         cout<<"������ �᫮�� ���祭��"<<endl;
         cin>>distanceMeters>>timeSec;
     }

     //������ � �뢮� ᪮���
     cout<<"V = "<<distanceMeters/timeSec << "�/�"<<endl;
}

//�㭪�� ������ � �뢮�� �᪮७��
void acceleration(void)
{
    //���⪠ ���� ����� �᫨ ��⠫�� ����� 諠�
    BUFF_CLEAR;

    float startingSpeedMS, finalSpeedMS;
    float timeSec;
    cout<<"������ ��砫��� � ������� ᪮���� � �/� � �६� � ᥪ㭤��"<<endl;
    cin>>startingSpeedMS>>finalSpeedMS>>timeSec;

    //���䨪��� ����� �᫨ ���� ��㭤�
    while (cin.fail())
    {
        cin.clear();
        BUFF_CLEAR;
        cout<<"������ �᫮�� ���祭��"<<endl;
        cin>>startingSpeedMS>>finalSpeedMS>>timeSec;
    }

    //������ � �뢮� �᪮७��
    cout<<"a = "<<(finalSpeedMS - startingSpeedMS)/timeSec<<" �/�"<<endl;
}

//�㭪�� ������ � �뢮�� ࠤ���
void radius(void)
{
   //���⪠ ���� ����� �᫨ ��⠫�� ����� 諠�
   BUFF_CLEAR;

   float circleMm;
   cout<<"������ ������ ���㦭���"<<endl;
   cin>>circleMm;

   //���䨪��� ����� �᫨ ���� ��㭤�
   while (cin.fail())
   {
       cin.clear();
       BUFF_CLEAR;
       cout<<"������ �᫮�� ���祭��"<<std::endl;
       cin>>circleMm;
   }

   cout<<"r = "<<circleMm/Pi<<" �"<<std::endl;
}


int main()
{
    //������� 2
    cout<<setw(10)<<std::right<<"*****"<<setw(30)<<right<<"�����"<<setw(30)<<right<<"*****"<<endl<<endl<<endl;
    cout<<setw(42)<<right<<" "<<"�������: ���. ��ࠧ������"<<endl;
    cout<<setw(42)<<right<<" "<<"��㯯� 315"<<endl;
    cout<<setw(42)<<right<<" "<<"��㤥��: ������殢 ����ᥩ"<<endl<<endl;
    cout<<setw(35)<<right<<" "<<"���� 2024"<<endl<<endl;

   //������� 3
   //���⠥� ����
   printMenu();

   //��६����� ��襣� �롮�
   char taskSelection;
   cin>>taskSelection;

   //��横��� �⮡� ����� �뫮 ���� ࠧ�� �����
   while(taskSelection != 'q' && taskSelection != 'Q')
   {
       //������ � �뢮� � ����ᨬ��� �� ��襣� �롮�
       switch(taskSelection)
       {
          case '1': speed(); break;
          case '2': acceleration(); break;
          case '3': radius(); break;
          default: cout<<"�롥�� ���祭�� �� ����"<<endl; break;
       }

       //���⪠ ���� ����� �᫨ ��⠫�� ����� 諠�
       BUFF_CLEAR;

       //�⮡� ���� �� ��������� ��ன ࠧ �᫨ ����� ��㭤�
       if(taskSelection >= '1' && taskSelection <= '3')
       printMenu();
       cin>>taskSelection;
   }

   cout<<"�� ᪮ன ����� ���!!!";
   return 0;
}
