#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t 	i;
	size_t 	len;

	len = ft_strlen(src);
	if (dstsize != 0)
	{
		i = 0;
		while ((i < (dstsize - 1)) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
