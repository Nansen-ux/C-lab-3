int getSumMaxMin(int arr[], int N)


{

	int sum = 0;
	int min = 0;
	int max = 0;
	int begin = 0;
	int end = 0;
	int i = 0;


	while (i < N)



	{



		if (arr[i] < min)



		{



			min = arr[i];



			begin = i;



		}



		if (arr[i] > max)



		{



			max = arr[i];



			end = i;



		}

		i++;

	}

	if (begin < end)

	{
		for (i = begin + 1; i < end; i++)

			sum = sum + arr[i];
	}

	else if (begin > end)



	{

		for (i = end + 1; i < begin; i++)



			sum = sum + arr[i];

	}

	else

		sum = arr[end];


	return sum;
}