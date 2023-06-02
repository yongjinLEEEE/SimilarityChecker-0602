#pragma once

using namespace std;
class SimilarityChecker {
public:
	int checkstrlength(vector<string>& input);

private:
	void sort(vector<string>& input);
	bool checkMaxCondition(vector<string>& input);
	bool check0Condition(vector<string>& input);
	int partialCalc(vector<string>& input);
};
