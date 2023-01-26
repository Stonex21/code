#include <unistd.h>
int main(int argc, char **argv)
{
    int i;
    int x;
    x = 1;
    while(argv[x] != 0)
    {
        i = 0;
         while(argv[x][i] != 0)
         {
            write(1,&argv[x][i],1);
            i++;
         }
        write(1,&"\n",1);
        x++;
    }
}