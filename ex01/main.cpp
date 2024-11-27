#include "iter.hpp"
#include <string>
#include <iostream>
#include <cstddef>
template <typename T>
void prinTab(T& a)
{
	std::cout << a;
}



int main(void)
{
	int tab[] = {1, 7, 3};

	iter(tab, 3, prinTab);
}