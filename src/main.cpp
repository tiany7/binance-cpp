#include "src/binance/binance.h"

int main()
{
    Binance::MarketData market;
    json result;
    std::cout<<"Binance API C++"<<std::endl;
    market.SetApiKeys("api-key", "secret-key");
    std::cout<<"Binance API C++ after"<<std::endl;

    // test connectivity to the Rest API
    market.TestConnectivity(result);
    std::cout <<"ok "<< result << std::endl;

    // current average price for a symbol
    MarketSymbolParams params;
    params.symbol = "BNBBTC";
    market.CurrentAvgPrice(params, result);
    std::cout << result << std::endl;

    return 0;
}