#include <string>
#include <vector>
#include "SimilarityChecker.h"

int SimilarityChecker::partialCalc(vector<string>& input)
{
	return (1 - (double)(input[0].size() - input[1].size()) / input[1].size()) * 60 + 0.5;
}

void SimilarityChecker::sort(vector<string>& input)
{
	if (input[0].size() < input[1].size())
	{
		string str_tmp;
		str_tmp = input[1];
		input[1] = input[0];
		input[0] = str_tmp;
	}
}

bool SimilarityChecker::checkMaxCondition(vector<string>& input)
{
	if (input[0].size() == input[1].size())
		return true;
	return false;
}

bool SimilarityChecker::check0Condition(vector<string>& input)
{
	if (input[0].size() - input[1].size() >= input[1].size() * 2)
		return true;
	return false;
}

int SimilarityChecker::checkstrlength(vector<string>& input) {
	if (checkMaxCondition(input)) return 60;

	/* ���ڿ� ���� �������� �������� ���� */
	SimilarityChecker().sort(input);

	if (check0Condition(input)) return 0;
	return SimilarityChecker().partialCalc(input);
}
