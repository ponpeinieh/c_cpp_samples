/* C code: */
#include "wrapper.h"
void code(int i, double d)
{
    wrapper_f(i);
    wrapper_g(d);
    wrapper_h();
}
int main(){
    code(10,100.01);
    return 0;
}