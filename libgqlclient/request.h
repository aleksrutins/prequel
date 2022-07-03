#ifndef GQL_REQUEST_H
#define GQL_REQUEST_H

#include <QObject>
#include "client.h"

namespace GQL {

class Q_DECL_EXPORT Request : public QObject
{
    Q_OBJECT
public:
    explicit Request(Client *client);

signals:

private:
    QString m_query;
};

} // namespace GQL

#endif // GQL_REQUEST_H
