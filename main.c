#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI M_PI
#define MYCOUNTER 2E20

enum day { PON, WT, SR, CZW, PT, SOB, NIEDZ };
int main(int argc, char* argv[])
{
    system("chcp 65001 >nul");
    const float BETA = M_E;
    const char NAME[] = "Jęz""yk\40C";
    const unsigned char CHAR = '\x41';
    const unsigned long COUNTER = 0x2E;
    double ludolfina = PI;
    float e = BETA;
    unsigned char zn = CHAR;
    unsigned long licz = COUNTER;
    unsigned int robo;
    long long int liczba64 = (long long int) MYCOUNTER;
    printf("%s, kompilator: ", NAME);
    system("gcc --version");
    printf("\nwartość pi= %.10lf", ludolfina);
    printf("\nwartość e= %.10lf", e);
    printf("\nznak= %u", zn);
    printf("\nznak= %c", zn);
    printf("\npoczątkowy licznik= %lu", licz);

    robo = -1;
    printf("\nlicznik1= %u", robo);
    printf("\nlicznik2= %d", robo);
    printf("\nliczba64= %lld\n", liczba64);
    enum day freeDay;
    srand(time(NULL));
    freeDay = rand() % 7;
    printf("\nDzień bez nudnych wykładów: %u\n", freeDay);
    fflush(stdin);
    getchar();
    return 0;
}