#include <iostream>
#include <string>
#include <stdlib.h> //c��ͷ�ļ�,Ϊ��ʹ��atoi
using namespace std;
class PrintOut
{
 public:
   PrintOut();//���캯��
   
   ~PrintOut();//��������
   
   int print(int count);
};

PrintOut::PrintOut()
{

}
PrintOut::~PrintOut()
{

}
int PrintOut::print(int count)
{
   int i = 0;
   while(i<count)
   {
    cout<<"hello RoboMaster"<<endl;
    i++;
   }
   return 0;
}

int main(int argc,char **argv)
{
 PrintOut po;
 int pn = 0;
 if( argc == 2 )//�ж������������ ����2ʱ���ڶ�������ת��������
 {
  pn = atoi((const char *)argv[1]);//���������char*ת����int
  po.print(pn);
 }
 else
 {
  cout<<"no input number of print"<<endl;
 }
 return 0;
}
//����ע�͵����ǵ�һ���ʵ��
/*int main(int argc,char **argv)
{
   int i = 0;
   int pn = 0;
   if( argc == 2 )
   {
    pn = atoi((const char *)argv[1]);
   }
   while(i < pn)
   {
    cout<<"hello RoboMaster"<<endl;
    i++;
   }
   return 0;
}*/
