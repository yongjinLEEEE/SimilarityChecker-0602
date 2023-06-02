#include <string>
#include <vector>
#include "SimilarityChecker.h"

int SimilarityChecker::checkstrlength(const vector<string>& input)
{
	if (input[0].size() == input[1].size())
	{
		return 60;
	} else
	{
		if (input[0].size() > input[1].size()) {
			int tmp_size;
			tmp_size = input[0].size() - input[1].size();
			if (tmp_size >= input[1].size() * 2)
				return 0;
			return (1 - (double)tmp_size / input[1].size()) * 60 + 0.5;

		} else {
			int tmp_size;
			tmp_size = input[1].size() - input[0].size();
			if (tmp_size >= input[0].size() * 2)
				return 0;

			return (1 - (double)tmp_size / input[0].size()) * 60 + 0.5;
		}
	}

	return 0;
}
