#include "h.h"
void code(int i, double d)
{
    f(i);
    g(d);
    h();
    // ...
}
int main(){
    code(10,100.01);
    return 0;
}