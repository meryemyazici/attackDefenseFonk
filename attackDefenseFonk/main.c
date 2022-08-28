#include <stdio.h>
#include <stdlib.h>

void attack(int point)
{
    srand(time(NULL));
    int increase = rand()%10;
    point += increase;
    printf("%d\n",point);
    defense(point);
}

void defense(int point)
{
    srand(time(NULL));
    int decrease=rand()%10+10;
    point -=decrease;
    printf("%d\n",point);
    if(point<=0)
    return;
    attack(point);

}
void main()
{
    attack(100);
}
