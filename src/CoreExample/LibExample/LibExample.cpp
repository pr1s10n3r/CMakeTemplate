#include "LibExample.hpp"

#include <QDebug>

LibExample::LibExample()
{
    qDebug() << "Hello from LibExample!";
}

LibExample::~LibExample()
{
    qDebug() << "Change the world... My final message. Goodbye!";
}