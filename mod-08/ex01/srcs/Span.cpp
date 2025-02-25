#include "../include/Span.hpp"

Span::Span() {}
Span::Span(unsigned int n) : N(n), size(0) {
   array.reserve(n);
}
Span::~Span() {}
Span::Span(const Span& other)
{
    this->N = other.N;
    this->array = other.array;
    this->size = other.size;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other) {
        this->N = other.N;
        this->size = other.size;
    }
    return *this;
}

void Span::addNumber(unsigned int N){
    
    try{
        if (size >= N){
            throw FullArrayException();
            array.push_back(N);
            size++;
        };
    }
    catch(const std::exception &e){
        std::cout << "Error: " << e.what() <<  std::endl;
    }

}

unsigned int Span::longestSpan(){
    if (_size + array.size() > _N)
        throw FullArrayException();
    _array.insert(_array.end(), array.begin(), array.end());
    _size += array.size();
}

int Span::shortestSpan()
{
    if (_size <= 1)
        throw NoSpanException();
    std::vector<int> tmp(_array);
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 1; i < _size - 1; i++)
    {
        if (tmp[i + 1] - tmp[i] < min)
            min = tmp[i + 1] - tmp[i];
    }
    return (min);
}

unsigned int Span::shortestSpan(){
    if (_size <= 1)
        throw NoSpanException();
    std::vector<int> tmp(_array);
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 1; i < _size - 1; i++)
    {
        if (tmp[i + 1] - tmp[i] < min)
            min = tmp[i + 1] - tmp[i];
    }
    return (min);
}
unsigned int Span::longestSpan(){

}

void Span::addVector(std::vector<unsigned int>at){
    if (at.size() + at.size() > N)
        throw FullArrayException();
    array.insert(array.end(), at.begin(), at.end());
    size += at.size();
}