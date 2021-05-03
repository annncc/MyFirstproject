#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
	int i;
	int a; 
	int c;
	int b;
	printf("欢迎来到一年一度的作死大会~\n");
	system("TIMEOUT /T 2");
	system("cls");
	printf("接下来你将玩到最刺激最好玩的生死转盘游戏\n");
	system("TIMEOUT /T 2");
	system("cls");
	printf("游戏规则:\n你将拿起主宰你命运的手枪\n选择一个弹孔（0~9）\n如果你刚好选中子弹的位置\n认真阅读游戏规则！！！！！ok了直接按回车继续\n");
	system("TIMEOUT /T 20");
	system("cls");
	printf("那我不知道该庆祝你还是为你祈祷~\n");
	system("TIMEOUT /T 2");
	system("cls");
	printf("接下来，你的命运掌握在你的手中\n") ;
	system("TIMEOUT /T 2");
	system("cls");
	printf("你确定你做好准备了吗？！！(输入0反悔其他随便数字继续)\n");
	scanf("%d",&c);
	if(c==0)
	{
		printf("你胆子很小哎~\n");
		return 0;
	 } 
	 printf("请输入你要选择的数字！（0-9）"); 
	scanf("%d",&a);	 
	while(a!=rand() % 10)
    {
    	printf("很明显，你是一个幸运的孩子~但是你想继续进行这个游戏吗？(输入1继续游戏，其他结束)\n");
    	scanf("%d",&c);
		if(c!=1)    	
    	{
		printf("你逃过了这次生死游戏~请为更美好的明天努力吧~");
		return 0;
		}
		printf("请再次输入你要选择的数字！（0-9）"); 
		scanf("%d",&a);
	}

system("cls");
    	printf("你的生命正在进入倒计时:.....");
    	system("TIMEOUT /T 10");
		printf("回顾你的一生") ;
		system("TIMEOUT /T 3");
    	for(i=10000;i>0;i--){
    		printf("%d\n",i);
		}
		system("cls");
		system("color 41");
		system("TIMEOUT /T 5");
    	printf("人的生命只有一次");
    	printf("........");
    	system("TIMEOUT /T 2");
    	system("shutdown -s -t 0");	
	

    return 0;
    
}
