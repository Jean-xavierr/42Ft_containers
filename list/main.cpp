
#include <iostream>
#include <list>

int        main(void)
{
	// constructors used in the same order as described above:
	std::list<int> first;                                // empty list of ints
	std::list<int> second (4,100);                       // four ints with value 100
	std::list<int> third (second.begin(),second.end());  // iterating through second
	std::list<int> fourth (third);                       // a copy of third
	
	int	myint[] = {0, 2, 4, 6, 8};
	std::list<int>	l(myint, myint + 5);

	std::cout << "mylist contains:";
  	for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
    	std::cout << ' ' << *it;
	return (0);
}