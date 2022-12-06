#include <iostream>
#include <time.h>//бібліотека для time
#include <stdlib.h>//бібліотека для random
using namespace std;

int main() {
	int value=-1;
	int arr[7];
	srand(time(NULL));
	for (int i = 0; i < 7; i++) {//створення масиву
		arr[i] =rand() % 3;
	}
	for (int i = 0; i < 6; i++) {//пошук першого нульового елементу
		if (arr[i] == 0)
			value = i;
      break;
	}
  for(int i=0;i<6;i++){
    cout << arr[i] << ' ';//вивід масиву
    }
	if (value == -1) {
    cout << "No zero" << endl;
    }
	else{
    cout << "\nIndex of element with value = zero is: " << value << endl;
    }
}
