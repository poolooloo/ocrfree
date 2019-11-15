#ifndef OCRMAINWINDOW_H
#define OCRMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class OcrMainWindow;
}

class OcrMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit OcrMainWindow(QWidget *parent = 0);
    ~OcrMainWindow();

private:
    Ui::OcrMainWindow *ui;
};

#endif // OCRMAINWINDOW_H
