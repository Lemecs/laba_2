//rab_1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("enter numbers\n");
	double x = 0.0, y = 0.0;
	scanf("%lf%lf", &x, &y);
	if (x > y)
		printf("%.2lf > %.2lf", x, y);
	else if (x < y)
		printf("%.2lf < %.2lf", x, y);
	else
		printf("%.2lf = %.2lf", x, y);
	return 0;
}

//rab_2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	printf("enter day numbers and talk time\n");
//	int day = 0, time = 0;
//	scanf("%d%d", &day, &time);
//	if (day > 5)
//		printf("final price: %.2lf", (double)time * 0.8);
//	else
//		printf("you dont have a discard");
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//rab_3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("enter day number\n");
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//		printf("it is Monday\n");
//	else if (day == 2)
//		printf("it is Tuesday\n");
//	else if (day == 3)
//		printf("it is Wednesday\n");
//	else if (day == 4)
//		printf("it is Thursday\n");
//	else if (day == 5)
//		printf("it is Friday\n");
//	else if (day == 6)
//		printf("it is Saturday\n");
//	else if (day == 7)
//		printf("it is Sunday\n");
//	else
//		printf("There is no such day");
//	return 0;
//}

//rab_4
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	double x = -2.0;
//	double y;
//	while (x != 2.5) {
//		y = (-2.4 * x * x + 5 * x - 3);
//		printf("when x = %.1f y = %.2f\n", x, y);
//		x = x + 0.5;
//	}
//	return 0;
//}

//rab_5
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n, i = 1;
//	double min, ob;
//	printf("enter the length of the sequence ");
//	scanf("%d", &n);
//	if (n <= 0) {
//		printf("the length must be greater than 0\n");
//		return 1;
//	}
//	printf("enter sequence\n");
//	scanf("%lf", &min);
//	while (i > n) {
//		scanf("%lf", &ob);
//		if (min < ob) {
//			min = ob;
//		}
//		i += 1;
//	}
//	printf("minimum number: %.2lf", min);
//	return 0;
//}