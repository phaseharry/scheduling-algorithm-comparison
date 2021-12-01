#include <iostream>
#include "Job.h"

using namespace std;

int main() {
	cout << "Hello" << endl;
	Job j1 = Job(1, 1.5, 2.5);
	cout << j1.getArrivalTime() << endl;
	return 0;
}