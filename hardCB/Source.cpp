#include <iostream>
int main()
{
	int sizeboard;
	std::cout << "Enter the size of board: "; std::cin >> sizeboard;
	std::cout << std::endl;
	for (int i = 0; i < sizeboard; i++)
	{
		for (int j = 0; j < sizeboard; j++)
		{
			for (int k = 0; k < sizeboard; k++)
			{
				for (int h = 0; h < sizeboard; h++)
				{
					std::cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
}