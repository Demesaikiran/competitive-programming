#include<bits/stdc++.h>

using namespace std;

int cmpFunction(const void *a, const void * b)
{
	return *(int*) a - *(int *) b;
}
int main()
{
	int a[10] = {1, 7, 2, 48, 9, 0};
	qsort(&a, 10, sizeof(int), cmpFunction);
	
	for(int i = 0; i < 10; i++)
		cout << a[i] << endl;
}
