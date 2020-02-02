#include <iostream>

int main(void)
{
	std::string input = "", hissOrNo = "no hiss";
	std::cin>>input;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 's' && input[i + 1] == 's')
		{
			hissOrNo = "hiss";
			break;
		}
	}
	std::cout << hissOrNo << std::endl;
}

