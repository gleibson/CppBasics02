#include<iostream>
#include<limits>

struct result;

int initial;
int final;
int reason;
bool y;
bool n;

int main()
{
	while(1)
	{
		std::cout << "Insert the number initial, final and rational number - in this order " << "\n";

		std::cout << "initial value" "\n";
		std::cin >> initial;
		std::cout << "final value" "\n";
		std::cin >> final;
		std::cout << "reason value " "\n";
		std::cin >> reason;

			if (std::cin.fail())
			{
				std::cout << "Error in the insert values ";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<int>::max(), '\n');
			}
			if (final > initial)
				std::swap(initial, final);

			if (reason < 0)
			   reason = -reason;

			else
			{
				for (int sum = 0; initial <= final; initial++)
				{
					sum = sum + initial;
					std::cout << "Result of Sum: " << sum << "\n";
				}
				
			}
			
			std::cout << "Are you Want to Continue?";
			std::cin >> y || n;
				if (y)
					continue;
				else
					break;

		}
                return 0;
}

