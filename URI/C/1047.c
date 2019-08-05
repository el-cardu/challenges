#include <stdio.h>

int main() {

	int initial_minute, initial_hour;
	int final_minute, final_hour;

	scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);

	int hour = final_hour - initial_hour;
	int minute = final_minute - initial_minute;

	if (hour <= 0 && minute <= 0)  {
		hour += 24;
	}

	if (minute < 0) {
		hour--;
		minute += 60;
	}

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);

	return 0;
}
