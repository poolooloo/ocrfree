#include "ocrmainwindow.h"
#include "ui_ocrmainwindow.h"
#include "ocr.h"
#include <QDebug>

OcrMainWindow::OcrMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OcrMainWindow)
{
    ui->setupUi(this);

    // 设置APPID/AK/SK
    std::string app_id = "17700105";//"你的 App ID";
    std::string api_key = "uYeTS7OjmmCTdVemItxxexXB";//"你的 Api key";
    std::string secret_key = "0nGKHsNaaHDrsDI6Fxn5tGD2WTk8KxZW";//"你的 Secret Key";

    aip::Ocr client(app_id, api_key, secret_key);

//用户向服务请求识别某张图中的所有文字
    Json::Value result;

    std::string image;
    int ret = aip::get_file_content("grpc.jpg", &image);
    qDebug()<<"ret = "<<ret;
    // 调用通用文字识别, 图片参数为本地图片
    result = client.general_basic(image, aip::null);
//    qDebug()<<result.getComment(Json::commentBefore);
//    Json::Reader reader;
//    for (int index=0; index < result.size(); ++index) {
//        qDebug()<<result[index]->asString();
//    }

    std::string outStr = result.toStyledString();
    qDebug()<<QString::fromStdString(outStr);
    // 如果有可选参数
//    std::map<std::string, std::string> options;
//    options["language_type"] = "CHN_ENG";
//    options["detect_direction"] = "true";
//    options["detect_language"] = "true";
//    options["probability"] = "true";

}

OcrMainWindow::~OcrMainWindow()
{
    delete ui;
}
