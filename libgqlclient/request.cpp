#include "request.h"
#include "client.h"

namespace GQL {

Request::Request(Client *client)
    : QObject{client}
{

}

} // namespace GQL
