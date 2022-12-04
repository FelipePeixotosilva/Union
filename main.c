#include<unistd.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;

    while(str[i])
        i++;

    return i;
}
int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;

    if(argc == 3)
    {
        while(argv[1][i])
        {
            j = 0;
            k = 0; 
            while( j < i)
            {
                if(argv[1][i] == argv[1][j])
                    k = 1;
                j++;
            }
            if(k == 0)
                write(1,&argv[1][i],1);
            i++;
        }
        i = 0;
        j = 0;
        k = 0;

        while(argv[2][i])
        {
            j = 0;
            k = 0;
            while(j <= ft_strlen(argv[1]))
            {
                if(argv[2][i] == argv[1][j])
                    k = 1;
                j++;
            }
            j = 0;
            while(j < i && k == 0)
            {
                if(argv[2][i] == argv[2][j])
                    k = 1;
                j++;
            }

        if(k == 0)
            write(1,&argv[2][i],1);
        i++;
        }
    }
    write(1,"\n",1);
}
