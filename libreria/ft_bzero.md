#include "libft.h"

/** Esta función se encarga de recorrer byte a byte el puntero s y asignarle el valor '\0' a cada posición **/

void    ft_bzero(void *s, size_t n)
{
        size_t                  i;
        unsigned char   *byte;

        i = 0;
/** Es importante entender que al ser un puntero void no podemos acceder directamente a sus posiciones, por lo que necesitamos hacer un casting a char, para acceder valor por valor. **/

        byte = (unsigned char *)s;
        while (i < n)
        {
                byte[i] = '\0';
                i++;
        }
}