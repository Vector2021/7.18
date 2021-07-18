#include<iostream>
#include<string>
using namespace std;
void test01()
{
  string s1; //创建空字符串，调用无参构造函数
  const char* str = "Hello World";
  string s2(str);//把c_string转换成string
  cout << s2 << endl;;
  string s3(s2);//调用拷贝构造函数
  cout << s3 << endl;
  string s4(10,'a');//使用10个a初始化字符串
  cout << s4 << endl;
}

void test02()
{
  string str1;
  str1 = "hello world!";
  
  string str2;
  str2 = str1;
  
  string str3;
  str3 = "A";

  string str4;
  str4.assign("Hello C++!");

  string str5;
  str5.assign("hello C++",5);

  string str6;
  str6.assign(str5);

  string str7;
  str7.assign(10,'a');

  string str8;
  str8.assign("a",1);


  cout << str1 << endl;
  cout << str2 << endl;
  cout << str3 << endl;
  cout << str4 << endl;
  cout << str5 << endl;
  cout << str6 << endl;
  cout << str7 << endl;
  cout << str8 << endl;
}

int main()
{
  test02();
  return 0;
}
