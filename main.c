#include "ft_printf.h"

int main()
{
	// printf("ft_printf:\n");
	// ft_printf("%%%c%%%s%%%d%%%i%%%u%%\n%x\n%%%X%%%% \n%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% \n%%%c%%%s%%%d%%%i%%%u%%\n%x\n%%%X%%%% \n%c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	// printf("printf:\n");
	// printf("%%%c%%%s%%%d%%%i%%%u%%\n%x\n%%%X%%%% \n%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% \n%%%c%%%s%%%d%%%i%%%u%%\n%x\n%%%X%%%% \n%c%%\n",    'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("ft_printf:\n");
	ft_printf("%c %s\n", 'a',"");
	printf("printf:\n");
	printf("%c %s\n", 'a',"");

	return 0;
}
