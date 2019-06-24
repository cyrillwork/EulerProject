#include "stringtokenizer.h"

///////////////////////////////////////////////////////////////////////////////
// constructor
///////////////////////////////////////////////////////////////////////////////
StringTokenizer::StringTokenizer() : buffer(""), token(""), delimiter(DEFAULT_DELIMITER)
{
    currPos = buffer.begin();
}

StringTokenizer::StringTokenizer(const std::string& str, const std::string& delimiter) :
    buffer(str), token(""), delimiter(delimiter)
{
    currPos = buffer.begin();
}


///////////////////////////////////////////////////////////////////////////////
// reset string buffer, delimiter and the currsor position
///////////////////////////////////////////////////////////////////////////////
void StringTokenizer::set(const std::string& str, const std::string& delimiter)
{
    this->buffer = str;
    this->delimiter = delimiter;
    this->currPos = buffer.begin();
}

void StringTokenizer::setString(const std::string& str)
{
    this->buffer = str;
    this->currPos = buffer.begin();
}

void StringTokenizer::setDelimiter(const std::string& delimiter)
{
    this->delimiter = delimiter;
    this->currPos = buffer.begin();
}

void StringTokenizer::addDelimiter(const std::string& add)
{
    this->delimiter += add;
    this->currPos = buffer.begin();
}


///////////////////////////////////////////////////////////////////////////////
// return the next token
// If cannot find a token anymore, return "".
///////////////////////////////////////////////////////////////////////////////
std::string StringTokenizer::nextToken()
{
    if(buffer.size() <= 0) return "";           // skip if buffer is empty

    token.clear();                              // reset token string

    this->skipDelimiter();                      // skip leading delimiters

    // append each char to token string until it meets delimiter
    while(currPos != buffer.end() && !isDelimiter(*currPos))
    {
        token += *currPos;
        ++currPos;
    }
    return token;
}

bool StringTokenizer::hasMoreTokens()
{
    if( (buffer.size() <= 0)|| (currPos == buffer.end()) )
        return false;
    else
        return true;
}



///////////////////////////////////////////////////////////////////////////////
// skip ang leading delimiters
///////////////////////////////////////////////////////////////////////////////
void StringTokenizer::skipDelimiter()
{
    while(currPos != buffer.end() && isDelimiter(*currPos))
        ++currPos;
}

///////////////////////////////////////////////////////////////////////////////
// return true if the current character is delimiter
///////////////////////////////////////////////////////////////////////////////
bool StringTokenizer::isDelimiter(char c)
{
    return (delimiter.find(c) != std::string::npos);
}


///////////////////////////////////////////////////////////////////////////////
// split the input string into multiple tokens
// This function scans tokens from the current cursor position.
///////////////////////////////////////////////////////////////////////////////
std::vector<std::string> StringTokenizer::split()
{
    std::vector<std::string> tokens;
    std::string _token;
    while((_token = this->nextToken()) != "")
    {
        tokens.push_back(_token);
    }

    return tokens;
}
