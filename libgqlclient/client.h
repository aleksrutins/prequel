#ifndef GQL_CLIENT_H
#define GQL_CLIENT_H

#include "libgqlclient_global.h"
#include "request.h"
#include <QObject>

namespace GQL {

class LIBGQLCLIENT_EXPORT Client : public QObject
{
    Q_OBJECT
public:
    Client(QString endpoint);
    QString endpoint() {
        return m_endpoint;
    }

public slots:
    QJsonObject sendRequest(Request req);

private:
    QString m_endpoint;
};

} // namespace GQL

#endif // GQL_CLIENT_H
