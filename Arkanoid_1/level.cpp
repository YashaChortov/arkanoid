#include "level.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
//#include "game.h"

#include "randomlevel.h"

Level::Level()
    : m_levelData(new QVector<LevelData>())
{

}

Level::~Level()
{
    delete m_levelData;
}

void Level::loadLevel()
{

    m_levelData->clear();
    LevelData levelData;
    int colorValue;
    int x;
    int y;
    QPoint position;
    int numberOfBlocks = Random::get(20, 40);

    for (int i = 0; i < numberOfBlocks; ++i) {

        qDebug() << i;

        // Генерируем случайное число от 0 до 4
        colorValue = /*rand() % 4 + 0*/ Random::get(0, 4);
        levelData.colorValue = colorValue;
        //qDebug() << "randomColour " << colorValue;

        // Генерируем случайное число от 0 до 10 и умножаем на 48
        x = /*(rand() % 11 + 0)*/ Random::get(0, 10) * 48;

        // Генерируем случайное число от 0 до 15 и умножаем на 16
        y = /*(rand() % 15 + 0)*/ Random::get(0, 15) * 16;

        position = QPoint(x,y);
        levelData.position = position;
        levelData.isDeleted = false;
        m_levelData->push_back(levelData);
    }


}
