union endian
{
   int x; /* data */
   char y[4];
};
#include <stdio.h>
namespace ryan2 {
int main(){
    union endian myendian;
    myendian.x = 0x0A0B0C0D;
    for (int n=0; n<4; n++){
        printf("%#X(%p)\n",myendian.y[n],&myendian.y[n]);
    }
}
}