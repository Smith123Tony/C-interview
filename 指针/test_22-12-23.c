#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));//7  sizeof(arr)�����������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr + 0));//4/8  �������������Ԫ�ص�ַ�Ĵ�С��arr+0����Ԫ�ص�ַ��
//	printf("%d\n", sizeof(*arr));//1  *arr����Ԫ�أ�sizeof(*arr)���������Ԫ�صĴ�С��
//	printf("%d\n", sizeof(arr[1]));//1  sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С��
//	printf("%d\n", sizeof(&arr));//4/8  &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4/8���ֽڡ�
//	printf("%d\n", sizeof(&arr + 1));//4/8  &arr+1���������������ĵ�ַ����Ҳ�Ǹ���ַ��
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8  &arr[0]�ǵ�һ��Ԫ�صĵ�ַ��&arr[0]+�ǵڶ���Ԫ�صĵ�ַ������Ϊchar*,char*�ĵ�ַ+1֮��ָ��ľ��ǵڶ���Ԫ�أ���Ҳ�Ǹ���ַ��
//	
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6  ����������д���ȼ�
//	//printf("%d\n", strlen(*arr));//err  �Ƿ������ڴ棬
//	//printf("%d\n", strlen(arr[1]));//err  �Ƿ������ڴ�
//	printf("%d\n", strlen(&arr));//6  ���ǻᱨ����  &arr - ����ĵ�ַ - ����ָ��(����ĵ�ַ��Ӧ�÷ŵ�����ָ������ȥ) - char (*p)[7] =&arr
//	printf("%d\n", strlen(&arr + 1));//���ֵ  ����������������
//	printf("%d\n", strlen(&arr[0] + 1));//ȡ����һ��Ԫ�صĵ�ַ֮���һ�ͱ���˵�һ��Ԫ�صĵ�ַ
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", sizeof(p));//4/8  �ѳ����ַ������ַ��ĵ�ַ�ŵ�sizeof��ȥ,p���ŵ��ǳ����ַ������ַ��ĵ�ַ,�����Ǽ���ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p + 1));//p+1�õ������ַ�b�ĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(*p));//1  *p�����ַ����ĵ�һ���ַ�'a'
//	printf("%d\n", sizeof(p[0]));//1  p[0]Ҳ���ַ����ĵ�һ���ַ�'a'  arr[i] == *(arr+i)
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8  &p+1�õ�����p��������ĵ�ַ
//	printf("%d\n", sizeof(&p[0] + 1));//4/8  �����õ�����'b'�ĵ�ַ
//
//	return 0;
//}