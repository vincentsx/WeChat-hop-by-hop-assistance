#include <stdio.h>
#include <windows.h>

int main()
{
	int time, dis;  //按屏幕的时间长度
	char str[100];
	while (1)
	{
		printf("请输入距离:");  //用尺子去量
		scanf("%d", &dis);
		time = dis * 1 + 24 / 2;   //关系
		sprintf(str, "adb shell input swipe 200 500 200 500 %d", time);
		system(str);  //发送字符串的?
	}
	return 0;
}


//system("cls");  //清除屏幕

//adb  
/*system("adb shell screencap -p /sdcard/screen.png");
system("adb pull /sdcard/screen.png");*/