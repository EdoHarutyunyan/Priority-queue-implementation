#include <iostream>
#include "Heap.h"

int main()
{
	Heap<int> my_heap(Heap<int>::Max);
	int tmp;
	while (std::cin >> tmp && tmp != 0)
	{
		my_heap.insert(tmp);
	}
	std::cout << "your max" << my_heap.remove();
	std::cout << "your max" << my_heap.remove();
	std::cout << "your max" << my_heap.remove();

	system("pause");
	return 0;
}
