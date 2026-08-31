#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

    float goal, time, sumtime = 0, lack;

    printf("Qual sua meta de estudos diária em horas? ");
    scanf("%f", &goal);

    while(sumtime < goal){
        
        printf("Quanto tempo voce estudou? ");
        scanf("%f", &time);

        sumtime = sumtime + time;
        lack = goal - sumtime;

        if (sumtime >= goal){
            printf("Voce atingiu sua meta!!");
        }
        else(printf("Ainda faltam %.1f horas \n", lack));
    }
    return 0;
}
