#include <iostream>
#include <string>
using namespace std;
void adding_elements_to_an_array();
void Delete_first_element();
int main()
{
	int arr[5] = { 3,2,1,7,66 };
	int size = 5;
	int even = 0;
	int i = 0;
	for (i = 0; i < 5; i++) {
		if ( size > arr[i]) {
			size = arr[i];

		}
		}
	cout << "The smallest number in the array is: " << size<<"\n";
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			even = even + 1;

		}
		
	}
	cout << "The amount of even numbers is: " << even << "\n";
	void adding_elements_to_an_array();
	return 0;
}

void adding_elements_to_an_array() {
	int array1[5];
	
	for (int i = 0; i < 5; i++) {
		cout << "enter element " << i + 1 << ": ";
		cin >> array1[i];
	}
	for (int j = 0; j < 5; j++) {
		cout << "The elements in the array are: " << array1[j] << std::endl;

	}
}
void Delete_first_element() {
	int n = 6;
	int array3[6] = { 16, 5, 7, 32, 1, 12 };
	cout << "Original Array (n="<<n<<") ";
	for (int i = 0; i < n; i++) cout << array3[1]<<" ";
	cout << " \n";
}