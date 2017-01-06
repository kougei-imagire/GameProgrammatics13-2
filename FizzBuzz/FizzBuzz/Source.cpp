#include<iostream>
#include<string>

void fizzBuzz(int maxNum);
std::string getFizzBuzz(int num);

int main()
{
	const int maxNum = 16;

	fizzBuzz(maxNum);

	return 0;
}

void fizzBuzz(int maxNum)
{
	//���[�v��1����J�n����̂�1�����Ă���
	maxNum += 1;

	for (int i = 1; i < maxNum; i++)
	{
		std::cout << getFizzBuzz(i) + "\n";
	}
}

//3�Ŋ���؂��Ȃ�Fizz 5�Ŋ���؂��Ȃ�Buzz 15�Ŋ���؂��Ȃ�FizzBuzz��Ԃ�
std::string getFizzBuzz(int num)
{
	std::string result;

	if (num % 3 == 0){
		result = result + "Fizz";
	}
	if (num % 5 == 0){
		result = result + "Buzz";
	}

	if (result.empty()){
		result = std::to_string(num);
	}

	return result;
}

