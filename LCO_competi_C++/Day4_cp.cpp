// Jack bought 400 hot dogs for the school picnic. If They were contained in
// package of 8 hot dogs, how many total packages did he buy?
// Create a C++ program without using \ or % operatot

#include <iostream>

using namespace std;

int main()
{
	/* code */
	int totalHotDog = 400;
	int totalHotDogPerContainer = 8;
	int totalContainer = 0;
		while (totalHotDog >= totalHotDogPerContainer) {
			totalHotDog -= totalHotDogPerContainer;
			totalContainer += 1;
		}
		cout << "Jack buy total " << totalContainer << " container";

	return 0;
}