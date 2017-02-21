#pragma once
ref class simpleAlgorithmModule
{
private:
	int num1;
	int num2;
	char operation;
protected:
public:
	simpleAlgorithmModule();
	~simpleAlgorithmModule();
	int addition(int num1,char operation, int num2);
	int subtraction(int num1, char operation, int num2);
	int multiplication(int num1, char operation, int num2);
	int division(int num1, char operation, int num2);
	int percentage(int num1, char operation, int num2);
};

