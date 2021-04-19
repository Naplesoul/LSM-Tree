#ifndef BLOOMFILTER_H
#define BLOOMFILTER_H

#define FILTER_SIZE 81920

#include <bitset>


class BloomFilter
{
private:
    std::bitset<FILTER_SIZE> bitSet;
public:
    BloomFilter() {bitSet.reset();}
    void add(const uint64_t &key);
    bool contains(const uint64_t &key);
    void save2Buffer(char* buf);
};


#endif // BLOOMFILTER_H
