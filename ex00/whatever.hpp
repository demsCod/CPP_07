template <typename T>

void swap(T& a, T& b )
{
	T c;
	c = a;
	a = b;
	b = c; 
}
template <typename T>
T min(const T& a, const T& b)
{
	if (a < b)
		return(a);
	if (b < a)
		return (b);
	return (b);
}

template <typename T>
T max(const T& a, const T& b)
{
	if (a > b)
		return(a);
	if (b > a)
		return (b);
	return (b);
}


