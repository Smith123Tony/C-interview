#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//error
//	printf("%d\n", strlen(&p));//随机值 运行但会出警告
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5  取出第二个元素的地址
//	return 0;
//}




////二维数组
//#include<stdio.h>
//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16  a[0]相当于第一行作为一维数组的数组名，sizeof(a[0])把数组名单独放到sizeof()内，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));//4/8  a[0]是第一行的数组名，数组名此时是首元素的地址，这里的a[0]其实就是第一行第一个元素的地址
//	//所以a[0]+1就是第一行第二个元素的地址，其实就是第一行第一个元素的地址a[0]+1表示第一行第二个元素的地址，地址大小为4/8个字节
//	printf("%d\n", sizeof(*(a[0] + 1)));//4  计算的是第一行第二个元素的大小
//	printf("%d\n", sizeof(a + 1));//4/8  a是二维数组的数组名，没有sizeof(数组名)，也没有&(数组名)，所以a是首元素地址，
//	//，而把二维数组看成一维数组时，而二维数组首元素是他的第一行一维数组。a就是第一行(首元素)的地址，则a+1是第二行一维数组的地址。
//	printf("%d\n", sizeof(*(a + 1)));//16  a+1上面提到是第二行一维数组的地址，解引用就是计算的第二行一维数组的元素
//	printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[]+1是第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16  a是首元素地址，*a就是第一行，sizeof(*a)就是计算第一行一维数组的地址
//	printf("%d\n", sizeof(a[3]));//16  sizeof()中括号内的表达h事不会计算，a[3]不会真的去访问第四行，这里只要a[3],即把第四行的数组名往这里一放
//	//其就是有它所对应的类型，第四行一维数组的类型是a[3],所以这里a[3]和a[0]是一个道理，虽然没有第四行，但没关系，sizeof不会真的访问
//	//sizeof内部的表达式是不参与任何计算的，只是根据它的类型计算它的大小。
//
//	return 0;
//}




//指针面试题
////T1
//#include<stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}



////T2
//#include<stdio.h>
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
////假设p的值为0x100000,如下表达式的值分别是多少？
////已知，结构体Test类型的变量大小是20个字节
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//00100014
//	printf("%p\n", (unsigned long)p + 0x1);//00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//00100004
//	//x86环境下的结果
//	//指针+-整数，加几减几取决于指针类型
//
//	return 0;
//}



////T3
////注意是在x86环境下，x64环境会报错
//#include<stdio.h>
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int *ptr1 = (int*)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);//这里(int)a是把首元素地址转换为了数字，然后加1，又(int*)转换回了地址，
//	//相当于地址向后移动一个字节
//
//	printf("%x %x", ptr1[-1], *ptr2);//4 2000000
//
//
//	//%x意思是16进制输出(以16进制输出变量地址)C语言中是用在标准输出和
//	//输入函数里的格式控制符。把整数值按16进制输出，不带前导0x
//	return 0;
//}



////T4
//#include<stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}



////T5
//#include<stdio.h>
////X86环境下
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	return 0;
//}



////T6
////X86
//#include<stdio.h>
//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&a + 1);//10
//	int* ptr2 = (int*)(*(a + 1)); //5   //*(a+1)==a[1]  第二行首元素地址  故这里的强制类型转换是多余的
//
//	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}



////T7
//#include<stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//
//	pa++;
//	printf("%s\n", *pa);//at
//
//	return 0;
//}