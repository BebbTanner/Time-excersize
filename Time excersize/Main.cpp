/*This code is not working correctly. It does not give the correct output,
it skips over the waiting time, and I think the do-while loop
is causing that error. I also think that most of this solution
can be kicked into a function.

In order for this to work correctly I am going to have to 
recreate the whole program.

currently, not sure what this program does.*/
#include <iostream>
using namespace std;

int main()
{
	int currentHours, currentMinutes, completionHours, completionMinutes, outputHours, outputMinutes;
	char colon, calculateAgain;

	cout << "Compute completion time from current time and waiting period\n";

	do
	{
		cout << "Current time:\nEnter 24 hour time in the format HH:MM \n";
		cin >> currentHours >> colon >> currentMinutes;

		cout << "Waiting time:\nEnter 24 hour time in the format HH:MM \n";
		cin >> outputHours >> colon >> outputMinutes;

		cout << "Completion Time in 24 hour format:\n";

		completionHours = currentHours + outputHours;
		completionMinutes = currentMinutes + outputMinutes;

		if (completionMinutes > 59)
		{
			completionMinutes = completionMinutes - 60;
			completionHours = completionHours + 1;
		}

		if (completionHours > 24)
		{
			completionHours = completionHours - 24;

			cout << "Completion Time is in the day following the start time\n";
		}

		cout << completionHours << colon << completionMinutes << endl;

		cout << endl << endl << "Enter Y or y to continue, any other halts\n\n";
		cin >> calculateAgain;

	} while (calculateAgain == 'Y' || calculateAgain == 'y');

	return 0;

}