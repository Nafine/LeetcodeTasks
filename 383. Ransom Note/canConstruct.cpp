#include <unordered_map>

bool canConstruct(std::string ransomNote, std::string magazine) //its without references in task
																// better to do it &ransomNote, &magazine
{
	std::unordered_map<char, int> letters;

	for(auto c : magazine)
	{
		letters[c]++;
	}  

	for(auto c : ransomNote)
	{
		if(!letters[c]--) return false;
	}

	return true;
}