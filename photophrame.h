#ifndef PHOTOPHRAME_H
#define PHOTOPHRAME_H

#include <QWidget>
#include <QLabel>

class PhotoPhrame : public QWidget
{
    Q_OBJECT

    QLabel *photo;

public:
    PhotoPhrame(QWidget *parent = 0);
    ~PhotoPhrame();
};

#endif // PHOTOPHRAME_H
