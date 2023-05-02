#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	const int limit = 12;
	const int done = -1;
	char user_in[limit]{ 0 };
	int times = 0;
	cout << "Enter words (to stop, type the word done):" << endl;
	cin >> user_in;
	while (strcmp(user_in, "done"))
	{
		times++;
		cin >> user_in;
	}
	cout << "You entered a total of " << times << " words.";
}