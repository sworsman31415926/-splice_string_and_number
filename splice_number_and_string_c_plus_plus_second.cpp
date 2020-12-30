#include <iostream>
//#include <stdlib>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int main()
{
	int a = 6;
	char b[10];
	//sprintf_s(b, "abc%d", a);
	snprintf(b,sizeof(b), "abc%d", a);
	cout << b << endl;
	system("pause");
	return 0;
}
/*
abc6
*/
/*
头文件 #include <stdio.h> add. build error
$ g++ splice_number_and_string_c_plus_plus_second.cpp
splice_number_and_string_c_plus_plus_second.cpp: In function ‘int main()’:
splice_number_and_string_c_plus_plus_second.cpp:10:2: error: ‘sprintf_s’ was not declared in this scope; did you mean ‘_sprintf_r’?
   10 |  sprintf_s(b, "abc%d", a);
      |  ^~~~~~~~~
      |  _sprintf_r

*/
/*
$ g++ splice_number_and_string_c_plus_plus_second.cpp
splice_number_and_string_c_plus_plus_second.cpp: In function ‘int main()’:
splice_number_and_string_c_plus_plus_second.cpp:11:14: error: invalid conversion from ‘const char*’ to ‘size_t’ {aka ‘long unsigned int’} [-fpermissive]
   11 |  snprintf(b, "abc%d", a);
      |              ^~~~~~~
      |              |
      |              const char*

*/
/*windows平台下线程安全的格式化字符串函数sprint_s并非标准C函数，因此linux下无法使用，但可以使用snprintf函数代替。*/