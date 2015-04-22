// google_prep.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "merge_sort.cpp"


int _tmain(int argc, _TCHAR* argv[])
{
	int a[20], i, b[20];
	cout<<"enter  the elements\n";
	for (i = 0; i < 5; i++)
	{
        cin>>a[i];
	}
    mergesort(a, 0, 4);
	cout<<"sorted array\n";
    for (i = 0; i < 5; i++)
	{
        cout<<a[i];
	}

	getchar();
	return 0;
}
