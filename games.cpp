#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
	int i;
	int a; 
	int c;
	int b;
	printf("��ӭ����һ��һ�ȵ��������~\n");
	system("TIMEOUT /T 2");
	system("cls");
	printf("�������㽫�浽��̼�����������ת����Ϸ\n");
	system("TIMEOUT /T 2");
	system("cls");
	printf("��Ϸ����:\n�㽫�������������˵���ǹ\nѡ��һ�����ף�0~9��\n�����պ�ѡ���ӵ���λ��\n�����Ķ���Ϸ���򣡣�������ok��ֱ�Ӱ��س�����\n");
	system("TIMEOUT /T 20");
	system("cls");
	printf("���Ҳ�֪������ף�㻹��Ϊ����~\n");
	system("TIMEOUT /T 2");
	system("cls");
	printf("����������������������������\n") ;
	system("TIMEOUT /T 2");
	system("cls");
	printf("��ȷ��������׼�����𣿣���(����0��������������ּ���)\n");
	scanf("%d",&c);
	if(c==0)
	{
		printf("�㵨�Ӻ�С��~\n");
		return 0;
	 } 
	 printf("��������Ҫѡ������֣���0-9��"); 
	scanf("%d",&a);	 
	while(a!=rand() % 10)
    {
    	printf("�����ԣ�����һ�����˵ĺ���~��������������������Ϸ��(����1������Ϸ����������)\n");
    	scanf("%d",&c);
		if(c!=1)    	
    	{
		printf("���ӹ������������Ϸ~��Ϊ�����õ�����Ŭ����~");
		return 0;
		}
		printf("���ٴ�������Ҫѡ������֣���0-9��"); 
		scanf("%d",&a);
	}

system("cls");
    	printf("����������ڽ��뵹��ʱ:.....");
    	system("TIMEOUT /T 10");
		printf("�ع����һ��") ;
		system("TIMEOUT /T 3");
    	for(i=10000;i>0;i--){
    		printf("%d\n",i);
		}
		system("cls");
		system("color 41");
		system("TIMEOUT /T 5");
    	printf("�˵�����ֻ��һ��");
    	printf("........");
    	system("TIMEOUT /T 2");
    	system("shutdown -s -t 0");	
	

    return 0;
    
}
