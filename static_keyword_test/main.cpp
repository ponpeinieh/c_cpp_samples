#include <stdio.h>
static int x = 100;
void fun()
{
    static int y = 200;
    printf("x=%d, y=%d\n",x, y++);
}

int main()
{
    //y++;
    fun();
    x++;
    fun();
    return 0;
}
