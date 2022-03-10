#include <stdio.h>

namespace ryan1 {
int main()
{
    FILE *fp;
    fp = fopen("test1.txt", "w+"); //write and read mode
    fprintf(fp, "123");
    rewind(fp); //rewind () function moves file pointer position to the beginning of the file.
    fprintf(fp, "01");
    rewind(fp);
    char ch;
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}
}