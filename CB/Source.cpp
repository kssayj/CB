#include <iostream>
#define UPPER_LEFT_ANGLE (char)218
#define LOWER_LEFT_ANGLE (char)192
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_RIGHT_ANGLE (char)217
#define WHITE_BOX (char)219 << (char)219
#define BLACK_BOX (char)32
#define HORISONT_LINE (char)196 << (char)196
#define VERTIC_LINE (char)179
int main()
{
	setlocale(LC_ALL, "C");
	int sizeboard;
	std::cout << "Enter the size of board: "; std::cin >> sizeboard;
	sizeboard++;
	for (int i = 0; i <= sizeboard; i++)
	{
		for (int j = 0; j <= sizeboard; j++)
		{
			if (i == 0 && j == 0) std::cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == sizeboard) std::cout << UPPER_RIGHT_ANGLE;
			else if (i == sizeboard && j == 0) std::cout << LOWER_LEFT_ANGLE;
			else if (i == sizeboard && j == sizeboard) std::cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == sizeboard) std::cout << HORISONT_LINE;
			else if (j == 0 || j == sizeboard) std::cout << VERTIC_LINE;
			else if (i % 2 == j % 2) std::cout << WHITE_BOX;
			else std::cout << "  ";
		}
		std::cout << std::endl;
	}
}