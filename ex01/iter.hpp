#include <string>

template <typename T>
void iter(T *a, int lenght, void (*func_ptr)(T&))
{
	if ( a == NULL || func_ptr == NULL)
		return ;
	for(int i = 0; i < lenght; i++)
		func_ptr(a[i]);
}


