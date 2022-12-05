#include <vector>
#include <algorithm>

vector<int> decode(vector<int>& encoded, int first) {

    vector<int> answer(encoded.size() + 1, first);

    int currentNum = first;
    int decodedNum;

    auto decodeNum = [&currentNum, &decodedNum](int encodedNum)
    {
        decodedNum = encodedNum ^ currentNum;

        currentNum = decodedNum;

        return decodedNum;
    };

    std::transform(encoded.begin(), encoded.end(), answer.begin() + 1, decodeNum);

    return answer;

}