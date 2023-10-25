

#include <iostream>
using namespace std;
//int Print(int X, int Y, int(&mass)[][]) {
//	for (int x = 0; x < X; x++)
//	{
//		for (int y = 0; y < Y; y++) {
//			cout << mass[x][y] << " ";
//		}
//		cout << endl;
//	}
//}
int main()
{
	int const X = 5;
	int const Y = 4;
	int mass[X][Y];
	int n = 5;
	for (int x = 0; x < X; x++)
	{
		for (int y = 0; y < Y; y++) {
			int randomNum = rand() % (5 - 1);
			if (randomNum == 1) {
				mass[x][y] = 1;
			}
			else {
				mass[x][y] = 0;
			}
		}
	}
	for (int x = 0; x < X; x++)
	{
		for (int y = 0; y < Y; y++) {
			cout << mass[x][y] << " ";
		}
		cout << endl;
	}
	for (int x = 0; x < X; x++)
	{
		int start = 0;
		int end = 0;
		bool isStart = false;
		for (int y = 0; y < Y; y++) {
			//start
			if (mass[x][y] == 1 and !isStart)
			{
				start = y;
				isStart = true;
			}
			//end
			if (mass[x][y] == 1 and y>start )
			{
				end = y;
			}
			if (end - start >0) {
			cout <<"Start: " << start << " End: " << end <<" Width: "<< end - start +1<< endl;

			}
			
		}
	}


}
