#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));//7  sizeof(arr)计算的是数组的大小，单位是字节
//	printf("%d\n", sizeof(arr + 0));//4/8  计算的是数组首元素地址的大小。arr+0是首元素地址。
//	printf("%d\n", sizeof(*arr));//1  *arr是首元素，sizeof(*arr)计算的是首元素的大小。
//	printf("%d\n", sizeof(arr[1]));//1  sizeof(arr[1])计算的是第二个元素的大小。
//	printf("%d\n", sizeof(&arr));//4/8  &arr虽然是数组的地址，但也是地址，所以是4/8个字节。
//	printf("%d\n", sizeof(&arr + 1));//4/8  &arr+1是跳过整个数组后的地址，但也是个地址。
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8  &arr[0]是第一个元素的地址，&arr[0]+是第二个元素的地址。类型为char*,char*的地址+1之后指向的就是第二个元素，但也是个地址。
//	
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6  与上面那种写法等价
//	//printf("%d\n", strlen(*arr));//err  非法访问内存，
//	//printf("%d\n", strlen(arr[1]));//err  非法访问内存
//	printf("%d\n", strlen(&arr));//6  但是会报警告  &arr - 数组的地址 - 数组指针(数组的地址就应该放到数组指针里面去) - char (*p)[7] =&arr
//	printf("%d\n", strlen(&arr + 1));//随机值  跳过的是整个数组
//	printf("%d\n", strlen(&arr[0] + 1));//取出第一个元素的地址之后加一就变成了第一个元素的地址
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", sizeof(p));//4/8  把常量字符串首字符的地址放到sizeof中去,p里存放的是常量字符串首字符的地址,这里是计算指针变量p的大小
//	printf("%d\n", sizeof(p + 1));//p+1得到的是字符b的地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*p));//1  *p就是字符串的第一个字符'a'
//	printf("%d\n", sizeof(p[0]));//1  p[0]也是字符串的第一个字符'a'  arr[i] == *(arr+i)
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8  &p+1拿到的是p这个变量的地址
//	printf("%d\n", sizeof(&p[0] + 1));//4/8  这里拿到的是'b'的地址
//
//	return 0;
//}