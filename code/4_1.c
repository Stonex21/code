#include <stdio.h>
int main(int argc,char **argv)
{
   int x;
   int y;
   //int z;
   int t;
   int biz = argc;
   char *kova;

   while(argc != 0)
   {
        x = 0;
        while(argv[x+1] != 0)
        {
            y = 0;
            t = 0;
            while(argv[x][y] != 0 || argv[x+1][y] != 0)
            {
                if (argv[x][y] > argv[x+1][y] && t != 1)
                {
                    kova = argv[x];
                    argv[x] = argv[x+1];
                    argv[x+1] = kova;
                    t = 1;
                }
                else
                    y++;
            }
            x++;
        }
        argc--;
   }
   while (argc < biz)
        printf("%s\n",argv[argc++]);
    return 0;
}