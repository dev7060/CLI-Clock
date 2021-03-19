#include <stdio.h>
#include <conio.h>
#include <time.h>
int main(){
	system("cls");
	system("TITLE Clock by github.com/dev7060");
	system("COLOR 0A");
	int hours, minutes, seconds;
	while(1){
		time_t now;
		time(&now);
		struct tm *local = localtime(&now);
    	hours = local->tm_hour;
    	minutes = local->tm_min;
    	seconds = local->tm_sec;
    	system("cls");
    	printf("\n\n\n\n\n\n\n\n\n\n\n");
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t%d:%d:%d\n\n\n\n\n\n", hours, minutes, seconds);
		printf("\n\n\n\n\n\n\n\n\n\n");
	}
	
	system("pause");
	return 0;
}
