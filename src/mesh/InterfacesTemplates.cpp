#include "SX126xInterface.h"
#include "SX126xInterface.cpp"
#include "SX128xInterface.h"
#include "SX128xInterface.cpp"
#include "api/ServerAPI.h"
#include "api/ServerAPI.cpp"

// We need this declaration for proper linking in derived classes
template class SX126xInterface<SX1262>;
template class SX126xInterface<SX1268>;
template class SX126xInterface<LLCC68>;
template class SX128xInterface<SX1280>;

#if HAS_ETHERNET
#include "api/ethServerAPI.h"
template class ServerAPI<EthernetClient>;
template class APIServerPort<ethServerAPI, EthernetServer>;
#endif

#if HAS_WIFI
#include "api/WiFiServerAPI.h"
template class ServerAPI<WiFiClient>;
template class APIServerPort<WiFiServerAPI, WiFiServer>;
#endif