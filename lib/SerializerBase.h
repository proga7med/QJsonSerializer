#ifndef SERIALIZERBASE_H
#define SERIALIZERBASE_H

#include <QByteArray>
#include <QJsonObject>
#include <QJsonArray>
#include <QObject>

class IArray;

class SerializerBase
{
	protected:
		QJsonArray serializeArray(const IArray &source) const;
		QJsonObject serializeObject(const QObject *source) const;
};

#endif // SERIALIZERBASE_H
