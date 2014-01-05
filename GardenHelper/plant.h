#ifndef PLANT_H
#define PLANT_H
#include <QString>
#include <QDate>

class Plant
{
public:
    Plant(QString _name);

    void setDatePlanted(QDate _planted);
private:
    QString m_name;
    QDate * p_planted;
};

#endif // PLANT_H
