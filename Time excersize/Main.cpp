/*This code is not working correctly. It does not give the correct output,
it skips over the waiting time, and I think the do-while loop
is causing that error. I also think that most of this solution
can be kicked into a function.

In order for this to work correctly I am going to have to 
recreate the whole program.

This program ask the user for the current time and the time that they will be waiting for.
It should then add those times together and tell the user the time it will be after they have 
finished waiting. This may not be the clearest explaination.*/
#include <iostream>
using namespace std;

int main()
{
	int currentHours, currentMinutes, completionHours, completionMinutes, outputHours, outputMinutes;
	char calculateAgain;

		/*This will ask the user for the current time using the 24 hour notation.*/
		cout << "Please enter the current time in the 24 hour format(HH:MM): " << endl;
		cin >> currentHours;
		cin >> currentMinutes;

		cout << "Please enter the time you are waiting(HH:MM): " << endl;
		cin >> outputHours;
		cin >> outputMinutes;

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

		/*This will output the time it will be after the user has finished waiting.*/
		cout << "The time will be: " << endl; 
		cout << completionHours << ":" << completionMinutes << endl;

	return 0;

}