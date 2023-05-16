#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class dcache
{
 public:
    uint64_t cacheData;
    uint32_t cacheTagLines;
    uint32_t cacheSets;
    uint32_t cacheAssoc;
    uint32_t cacheMissCount;


    //Constructor
    dcache(uint64_t cacheData, uint32_t cacheTagLines, uint32_t cacheSets, uint32_t cacheAssoc) {
        this->cacheData = cacheData;
        this->cacheTagLines = cacheTagLines;
        this->cacheSets = cacheSets;
        this->cacheAssoc = cacheAssoc;
        this->cacheMissCount = 0;
    }

    void thesaurus_init() {
        
    }

    void dcache_access() {
        printf("Value of data read/write:%d\n",rd_wr_data);
    }
};