#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int N;
    std::vector<unsigned int>array;
    unsigned int size;
public:
    Span();
    Span(unsigned int n);
    ~Span();
    Span(const Span& other);
    Span& operator=(const Span& other);
    void addNumber(unsigned int N);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    bool operator!=(const Span& other);
    void addVector(std::vector<unsigned int>at);
    class FullArrayException : public std::exception
    {
        virtual const char *what() const throw();
    };

    class NoSpanFound : public std::exception{
        virtual const char *what() const throw();
    };
};