int getSum(char buf[])


{

	int i = 0;
	int val = 0;
	int sum = 0;


	while (buf[i])

	{

		if (buf[i] >= '0' && buf[i] <= '9')
			val = val * 10 + (buf[i] - '0'); 
		else

		{
			sum += val;
			val = 0;
		}

		i++;

	}



	return sum;

}