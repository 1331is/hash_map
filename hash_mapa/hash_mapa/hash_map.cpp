#include <iostream>
class hash_map
{
public:
	void push_double(int key,int value ) {
		if (check_unic(key)) {
			arr[size] = key;
			arr[size + 1] = value;
			size++;
			size++;
		}
	}
	bool check_unic(int val) {
		for (int i = 0; i < size; i + 2) {
			if (arr[i] == val) {
				return false;
			}
		}
		return true;
	}
	int find_val_by_key(int val) {
		for (int i = 0; i < size; i + 2) {
			if (arr[i] == val) {
				return arr[i+1];
			}
		}
	}
	
private:
	int capasity = 256;
	int* arr = new int[capasity];
	int size = 0;
};

int main() {
	return 0;
}