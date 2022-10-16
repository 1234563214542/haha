#include <iostream>
#include <string>
#include <stdlib.h> //c的头文件,为了使用atoi
using namespace std;
class PrintOut
{
 public:
   PrintOut();//构造函数
   
   ~PrintOut();//析构函数
   
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
 if( argc == 2 )//判断输入参数个数 等于2时将第二个参数转换成数字
 {
  pn = atoi((const char *)argv[1]);//将输入参数char*转换成int
  po.print(pn);
 }
 else
 {
  cout<<"no input number of print"<<endl;
 }
 return 0;
}
//下面注释掉的是第一题的实现
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
