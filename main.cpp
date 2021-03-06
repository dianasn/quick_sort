#include <iostream>

using namespace std;

void quick_sort(int *a, int left, int right)
{
	int med = a[left];

	int l = left;
	int r = right;

	do 
	{
		while (a[l] < med)
			++l;
		while (a[r] > med)
			--r;
		if (l <= r)
		{
			swap(a[l],a[r]);
			++l;
			--r;
		}

		if (left < r)
			quick_sort(a, left, r);
		if (right > l)
			quick_sort(a, l, right);
	} while (l <= r);
}

int main() 
{
    int n;
    cin>>n;
    
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
        
    quick_sort(a, 0, n);
    
    for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout<< endl;
    

	return 0;

}
