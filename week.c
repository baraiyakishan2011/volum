#include<stdio.h>

enum week{
	sun,mon=7,tue,wed,thu=17,fri,sat
};

void main()
{
	printf("Sun = %d\n",sun);
	printf("Mon = %d\n",mon);
	printf("Tue = %d\n",tue);
	printf("Wed = %d\n",wed);
	printf("Thu = %d\n",thu);
	printf("Fri = %d\n",fri);
	printf("Sat = %d\n",sat);
}

