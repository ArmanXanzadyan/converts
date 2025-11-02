#include "../headers/Convert.hpp"
#include <string>
#include <vector>

inline bool
canFit(const std::vector<std::string>& words, const int i, const int j, const int lineWordLen, const int maxWidth)
{
    const int nextLen = lineWordLen + static_cast<int>(words[j].size());
    const int spacesNeeded = j - i;
    return nextLen + spacesNeeded <= maxWidth;
}

inline std::string 
leftJustify(const std::vector<std::string>& words, const int i, const int j, const int maxWidth)
{
    std::string line = words[i];
    for (int k = i + 1; k < j; ++k) {
        line += ' ';
        line += words[k];
    }
    const int pad = maxWidth - static_cast<int>(line.size());
    if (pad > 0) line.append(pad, ' ');
    return line;
}

inline std::string
middleJustify(const std::vector<std::string>& words, const int i, const int j, const int lineWordLen, const int maxWidth)
{
    const int totalSpaces = maxWidth - lineWordLen;
    const int gaps = j - i - 1;
    const int spaceEach = totalSpaces / gaps;
    const int extra = totalSpaces % gaps;

    std::string line;
    for (int k = i; k < j; ++k) {
        line += words[k];
        if (k < j - 1) {
            const int spaces = spaceEach + ((k - i) < extra ? 1 : 0);
            line.append(spaces, ' ');
        }
    }
    return line;
}

namespace Algorithms
{

std::vector<std::string>
fullJustify(const std::vector<std::string>& words, const int maxWidth)
{
    std::vector<std::string> result;
    if (maxWidth <= 0) return result;

    const int wordsSize = static_cast<int>(words.size());
    int i = 0;

    while (i < wordsSize) {
        int j = i;
        int lineWordLen = 0;
        while (j < wordsSize && canFit(words, i, j, lineWordLen, maxWidth)) {
            lineWordLen += static_cast<int>(words[j].size());
            ++j;
        }
        const int wordsCount = j - i;
        std::string line;

        if (j == wordsSize || wordsCount == 1) {
            line = leftJustify(words, i, j, maxWidth);
        } else {
            line = middleJustify(words, i, j, lineWordLen, maxWidth);
        }

        result.push_back(line);
        i = j;
    }

    return result;
}
}

