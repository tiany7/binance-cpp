#include "binance.h"

int main()
{
    MarketData market;
    json j;
    market.TestConnectivity(j);
    std::cout << j.dump() << std::endl;
    return 0;
}