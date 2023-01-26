#include <stdio.h>
int main(int argc,char **argv)
{
    char *kova;
    int x;
    int y;
    x = 1;
    while(argc-- != 0 && x < argc)
    {
        y = 0;
        while((argv[x][y] != 0 ||argv[x+1][y] != 0))
        {
            if(argv[x][y] > argv[x+1][y])
            {
               kova = argv[x+1];
               argv[x+1] = argv[x];
               argv[x] = kova;
            }
            y++;
        }
        x++;
    }
    x++;
    while(x != 0)
    {
       // x++;
        printf("%s\n",argv[x--]);
    }
    return(0);
}