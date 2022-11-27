#include "Header.h"

using namespace std;

int main() {
	Var<int> A = 10;
	Var<int> B = A;
	A = A + 10;
	--B;
	B += A;
	cout << B.Get();

	return 0;
}