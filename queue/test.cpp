#include "queue.hpp"
#include "../list/list.hpp"

int		main(void)
{
	ft::list<int>		l(2,42);
	ft::queue<int>		q(l);
	ft::queue<int>		q2(l);



	l.push_back(41);
	q2.push(41);
	std::cout << "queue size : " << q.size() << std::endl;
	q.push(43);
	std::cout << " == : " << std::boolalpha << (q == q2) << std::endl;
	std::cout << " != : " << std::boolalpha << (q != q2) << std::endl;
	std::cout << " < : " << std::boolalpha << (q < q2) << std::endl;
	std::cout << " <= : " << std::boolalpha << (q2 <= q2) << std::endl;
	std::cout << " > : " << std::boolalpha << (q > q2) << std::endl;
	std::cout << " >= : " << std::boolalpha << (q >= q2) << std::endl;
	while (!q.empty())
 	{
     std::cout << ' ' << q.front();
     q.pop();
  	}


	return (0);
}