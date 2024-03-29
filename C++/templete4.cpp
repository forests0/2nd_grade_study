#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Max(T a, T b) {
	return a > b ? a : b;
}

template <>
const char* Max(const char* a, const char* b) {
	return strcmp(a, b) ? a : b;
}

template <>
char* Max(char* a, char* b) {
	return strlen(a) > strlen(b) ? a : b;
}

int main(void) {
	cout << Max(10, 20) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("BCDE", "ABC") << endl;

    char str1[] = "Simple";
    char str2[] = "Best";

    cout<<Max(str1, str2) << endl;
	return 0;
}