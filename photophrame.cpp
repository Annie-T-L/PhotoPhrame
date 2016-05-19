#include "photophrame.h"

PhotoPhrame::PhotoPhrame(QWidget *parent)
    : QWidget(parent)
{

    photo = new QLabel(this);
    photo->setFrameStyle(QFrame::Plain || QFrame::StyledPanel);
    QPixmap pix1(QPixmap(":/img/images (14).jpg"));
    photo->setPixmap(pix1);
    photo->setMinimumSize(pix1.size());



}

PhotoPhrame::~PhotoPhrame()
{

}
