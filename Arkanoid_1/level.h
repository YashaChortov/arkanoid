#ifndef LEVEL_H
#define LEVEL_H

#include <QVector>
#include <QPoint>

struct LevelData
{
    int colorValue;
    QPoint position;
    bool isDeleted;
};

class Level
{
public:
    Level();
    ~Level();
    void loadLevel();
    QList<LevelData>* m_levelData;
};


#endif // LEVEL_H
