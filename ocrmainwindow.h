#ifndef OCRMAINWINDOW_H
#define OCRMAINWINDOW_H

#include <QMainWindow>

#include <QUrl>

namespace Ui {
class OcrMainWindow;
}

class OcrMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit OcrMainWindow(QWidget *parent = 0);
    ~OcrMainWindow();

private slots:
    void on_btnOpenImg_clicked();

    void on_btnAnalyzeImg_clicked();

private:
    Ui::OcrMainWindow *ui;
    QImage mImg;
    QUrl mImgUrl;
    std::string app_id;
    std::string api_key;
    std::string secret_key;
//    aip::Ocr *client;
};

#endif // OCRMAINWINDOW_H
