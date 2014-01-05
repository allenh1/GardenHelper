#include "plant.h"

Plant::Plant(QString _name)
{
    m_name = _name;//sto the name of the plant
}

void Plant::setDatePlanted(QDate _planted)
{ p_planted = &_planted; }
