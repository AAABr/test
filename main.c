#include <unistd.h>

void ft_print(char c)
{
    write(1, &c, 1);
}

void ft_number(int nb)
{
    unsigned int nbr_unsigned;

    if (nb < 0)
    {
       nbr_unsigned = (unsigned int)(-1*nb);

    }
   else
      nbr_unsigned = (unsigned int)nb;
    if(nbr_unsigned >= 10)
    {
        ft_number(nbr_unsigned / 10);
        ft_number(nbr_unsigned % 10);
    }
    else
       ft_print(nbr_unsigned + '0');
}
int main()
{
    ft_number(500000);
}