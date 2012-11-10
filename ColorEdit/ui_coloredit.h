/********************************************************************************
** Form generated from reading UI file 'coloredit.ui'
**
** Created: Sat Nov 10 20:33:23 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOREDIT_H
#define UI_COLOREDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorEdit
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_R;
    QLabel *label_G;
    QLabel *label_B;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QSlider *OneSliderB;
    QSpinBox *OneValueColorB;
    QSlider *OneSliderG;
    QSpinBox *OneValueColorG;
    QSpinBox *OneValueColorR;
    QSlider *OneSliderR;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *colorEditOneRGB;
    QLineEdit *colorEditOneRHtml;
    QLineEdit *colorEditOnerHtml;
    QWidget *page_3;
    QGridLayout *gridLayout_6;
    QSlider *ThreeSliderB;
    QSlider *ThreeSliderR;
    QSlider *ThreeSliderG;
    QSpinBox *ThreeValueColorR;
    QSpinBox *ThreeValueColorG;
    QSpinBox *ThreeValueColorB;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *colorEditThreeRGB;
    QLineEdit *colorEditThreeRHtml;
    QLineEdit *colorEditThreerHtml;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QSlider *TwoSliderG;
    QSlider *TwoSliderB;
    QSlider *TwoSliderR;
    QSpinBox *TwoValueColorR;
    QSpinBox *TwoValueColorG;
    QSpinBox *TwoValueColorB;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *colorEditTwoRGB;
    QLineEdit *colorEditTwoRHtml;
    QLineEdit *colorEditTworHtml;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_4;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *borderBL;
    QCheckBox *borderTogether;
    QVBoxLayout *verticalLayout_5;
    QSpinBox *borderBLEditRight;
    QSpinBox *borderBLEditDown;
    QSpinBox *borderBLEditTop;
    QSpinBox *borderBLEditLeft;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *cornerBL;
    QCheckBox *cornerTogether;
    QVBoxLayout *verticalLayout_8;
    QSpinBox *cornerBLEditLeftTop;
    QSpinBox *cornerBLEditRightDown;
    QSpinBox *cornerBLEditRightTop;
    QSpinBox *cornerBLEditLeftDown;
    QFrame *line_3;
    QWidget *horizontalWidget1;
    QHBoxLayout *horizontalLayout;
    QRadioButton *gradientOne;
    QComboBox *copyOne;
    QDoubleSpinBox *pos_One;
    QRadioButton *gradientTwo;
    QComboBox *copyTwo;
    QDoubleSpinBox *pos_Two;
    QRadioButton *gradientThree;
    QDoubleSpinBox *pos_Three;
    QComboBox *copyThree;
    QLabel *labelTest;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QVBoxLayout *verticalLayout_10;
    QDoubleSpinBox *x_1;
    QDoubleSpinBox *y_1;
    QDoubleSpinBox *x_2;
    QDoubleSpinBox *y_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *ColorEdit)
    {
        if (ColorEdit->objectName().isEmpty())
            ColorEdit->setObjectName(QString::fromUtf8("ColorEdit"));
        ColorEdit->resize(880, 483);
        gridLayout = new QGridLayout(ColorEdit);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(ColorEdit);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalWidget = new QWidget(tab);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalWidget->setMaximumSize(QSize(16777215, 120));
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 10, -1, 10);
        label_R = new QLabel(horizontalWidget);
        label_R->setObjectName(QString::fromUtf8("label_R"));
        label_R->setMinimumSize(QSize(35, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_R->setFont(font);
        label_R->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0)"));
        label_R->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_R);

        label_G = new QLabel(horizontalWidget);
        label_G->setObjectName(QString::fromUtf8("label_G"));
        label_G->setMinimumSize(QSize(35, 0));
        label_G->setFont(font);
        label_G->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0)"));
        label_G->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_G);

        label_B = new QLabel(horizontalWidget);
        label_B->setObjectName(QString::fromUtf8("label_B"));
        label_B->setMinimumSize(QSize(35, 0));
        label_B->setFont(font);
        label_B->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255)"));
        label_B->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_B);


        horizontalLayout_2->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(horizontalWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        OneSliderB = new QSlider(page);
        OneSliderB->setObjectName(QString::fromUtf8("OneSliderB"));
        OneSliderB->setMaximum(255);
        OneSliderB->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(OneSliderB, 2, 0, 1, 1);

        OneValueColorB = new QSpinBox(page);
        OneValueColorB->setObjectName(QString::fromUtf8("OneValueColorB"));
        OneValueColorB->setMaximum(255);

        gridLayout_3->addWidget(OneValueColorB, 2, 1, 1, 1);

        OneSliderG = new QSlider(page);
        OneSliderG->setObjectName(QString::fromUtf8("OneSliderG"));
        OneSliderG->setMaximum(255);
        OneSliderG->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(OneSliderG, 1, 0, 1, 1);

        OneValueColorG = new QSpinBox(page);
        OneValueColorG->setObjectName(QString::fromUtf8("OneValueColorG"));
        OneValueColorG->setMaximum(255);

        gridLayout_3->addWidget(OneValueColorG, 1, 1, 1, 1);

        OneValueColorR = new QSpinBox(page);
        OneValueColorR->setObjectName(QString::fromUtf8("OneValueColorR"));
        OneValueColorR->setMaximum(255);
        OneValueColorR->setValue(0);

        gridLayout_3->addWidget(OneValueColorR, 0, 1, 1, 1);

        OneSliderR = new QSlider(page);
        OneSliderR->setObjectName(QString::fromUtf8("OneSliderR"));
        OneSliderR->setMinimumSize(QSize(280, 0));
        OneSliderR->setMaximum(255);
        OneSliderR->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(OneSliderR, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 2, -1, 0);
        colorEditOneRGB = new QLineEdit(page);
        colorEditOneRGB->setObjectName(QString::fromUtf8("colorEditOneRGB"));
        colorEditOneRGB->setMinimumSize(QSize(0, 0));
        colorEditOneRGB->setMaximumSize(QSize(16777215, 16777215));
        colorEditOneRGB->setReadOnly(true);

        verticalLayout_2->addWidget(colorEditOneRGB);

        colorEditOneRHtml = new QLineEdit(page);
        colorEditOneRHtml->setObjectName(QString::fromUtf8("colorEditOneRHtml"));
        colorEditOneRHtml->setMaximumSize(QSize(16777215, 16777215));
        colorEditOneRHtml->setReadOnly(true);

        verticalLayout_2->addWidget(colorEditOneRHtml);

        colorEditOnerHtml = new QLineEdit(page);
        colorEditOnerHtml->setObjectName(QString::fromUtf8("colorEditOnerHtml"));
        colorEditOnerHtml->setMaximumSize(QSize(16777215, 16777215));
        colorEditOnerHtml->setReadOnly(true);

        verticalLayout_2->addWidget(colorEditOnerHtml);


        gridLayout_3->addLayout(verticalLayout_2, 0, 2, 3, 1);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_6 = new QGridLayout(page_3);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        ThreeSliderB = new QSlider(page_3);
        ThreeSliderB->setObjectName(QString::fromUtf8("ThreeSliderB"));
        ThreeSliderB->setMaximum(255);
        ThreeSliderB->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(ThreeSliderB, 2, 0, 1, 1);

        ThreeSliderR = new QSlider(page_3);
        ThreeSliderR->setObjectName(QString::fromUtf8("ThreeSliderR"));
        ThreeSliderR->setMinimumSize(QSize(280, 0));
        ThreeSliderR->setMaximum(255);
        ThreeSliderR->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(ThreeSliderR, 0, 0, 1, 1);

        ThreeSliderG = new QSlider(page_3);
        ThreeSliderG->setObjectName(QString::fromUtf8("ThreeSliderG"));
        ThreeSliderG->setMaximum(255);
        ThreeSliderG->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(ThreeSliderG, 1, 0, 1, 1);

        ThreeValueColorR = new QSpinBox(page_3);
        ThreeValueColorR->setObjectName(QString::fromUtf8("ThreeValueColorR"));
        ThreeValueColorR->setMaximum(255);
        ThreeValueColorR->setValue(0);

        gridLayout_6->addWidget(ThreeValueColorR, 0, 1, 1, 1);

        ThreeValueColorG = new QSpinBox(page_3);
        ThreeValueColorG->setObjectName(QString::fromUtf8("ThreeValueColorG"));
        ThreeValueColorG->setMaximum(255);

        gridLayout_6->addWidget(ThreeValueColorG, 1, 1, 1, 1);

        ThreeValueColorB = new QSpinBox(page_3);
        ThreeValueColorB->setObjectName(QString::fromUtf8("ThreeValueColorB"));
        ThreeValueColorB->setMaximum(255);

        gridLayout_6->addWidget(ThreeValueColorB, 2, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 2, -1, 0);
        colorEditThreeRGB = new QLineEdit(page_3);
        colorEditThreeRGB->setObjectName(QString::fromUtf8("colorEditThreeRGB"));
        colorEditThreeRGB->setMinimumSize(QSize(150, 0));
        colorEditThreeRGB->setMaximumSize(QSize(16777215, 16777215));
        colorEditThreeRGB->setReadOnly(true);

        verticalLayout_6->addWidget(colorEditThreeRGB);

        colorEditThreeRHtml = new QLineEdit(page_3);
        colorEditThreeRHtml->setObjectName(QString::fromUtf8("colorEditThreeRHtml"));
        colorEditThreeRHtml->setMaximumSize(QSize(16777215, 16777215));
        colorEditThreeRHtml->setReadOnly(true);

        verticalLayout_6->addWidget(colorEditThreeRHtml);

        colorEditThreerHtml = new QLineEdit(page_3);
        colorEditThreerHtml->setObjectName(QString::fromUtf8("colorEditThreerHtml"));
        colorEditThreerHtml->setMaximumSize(QSize(16777215, 16777215));
        colorEditThreerHtml->setReadOnly(true);

        verticalLayout_6->addWidget(colorEditThreerHtml);


        gridLayout_6->addLayout(verticalLayout_6, 0, 2, 3, 1);

        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        TwoSliderG = new QSlider(page_2);
        TwoSliderG->setObjectName(QString::fromUtf8("TwoSliderG"));
        TwoSliderG->setMaximum(255);
        TwoSliderG->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(TwoSliderG, 1, 0, 1, 1);

        TwoSliderB = new QSlider(page_2);
        TwoSliderB->setObjectName(QString::fromUtf8("TwoSliderB"));
        TwoSliderB->setMaximum(255);
        TwoSliderB->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(TwoSliderB, 2, 0, 1, 1);

        TwoSliderR = new QSlider(page_2);
        TwoSliderR->setObjectName(QString::fromUtf8("TwoSliderR"));
        TwoSliderR->setMinimumSize(QSize(280, 0));
        TwoSliderR->setMaximum(255);
        TwoSliderR->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(TwoSliderR, 0, 0, 1, 1);

        TwoValueColorR = new QSpinBox(page_2);
        TwoValueColorR->setObjectName(QString::fromUtf8("TwoValueColorR"));
        TwoValueColorR->setMaximum(255);
        TwoValueColorR->setValue(0);

        gridLayout_5->addWidget(TwoValueColorR, 0, 1, 1, 1);

        TwoValueColorG = new QSpinBox(page_2);
        TwoValueColorG->setObjectName(QString::fromUtf8("TwoValueColorG"));
        TwoValueColorG->setMaximum(255);

        gridLayout_5->addWidget(TwoValueColorG, 1, 1, 1, 1);

        TwoValueColorB = new QSpinBox(page_2);
        TwoValueColorB->setObjectName(QString::fromUtf8("TwoValueColorB"));
        TwoValueColorB->setMaximum(255);

        gridLayout_5->addWidget(TwoValueColorB, 2, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 2, -1, 0);
        colorEditTwoRGB = new QLineEdit(page_2);
        colorEditTwoRGB->setObjectName(QString::fromUtf8("colorEditTwoRGB"));
        colorEditTwoRGB->setMinimumSize(QSize(150, 0));
        colorEditTwoRGB->setMaximumSize(QSize(16777215, 16777215));
        colorEditTwoRGB->setReadOnly(true);

        verticalLayout_3->addWidget(colorEditTwoRGB);

        colorEditTwoRHtml = new QLineEdit(page_2);
        colorEditTwoRHtml->setObjectName(QString::fromUtf8("colorEditTwoRHtml"));
        colorEditTwoRHtml->setMaximumSize(QSize(16777215, 16777215));
        colorEditTwoRHtml->setReadOnly(true);

        verticalLayout_3->addWidget(colorEditTwoRHtml);

        colorEditTworHtml = new QLineEdit(page_2);
        colorEditTworHtml->setObjectName(QString::fromUtf8("colorEditTworHtml"));
        colorEditTworHtml->setMaximumSize(QSize(16777215, 16777215));
        colorEditTworHtml->setReadOnly(true);

        verticalLayout_3->addWidget(colorEditTworHtml);


        gridLayout_5->addLayout(verticalLayout_3, 0, 2, 3, 1);

        stackedWidget->addWidget(page_2);

        horizontalLayout_2->addWidget(stackedWidget);


        gridLayout_4->addWidget(horizontalWidget, 9, 0, 1, 2);

        verticalWidget = new QWidget(tab);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        verticalWidget->setMaximumSize(QSize(150, 16777215));
        verticalLayout_4 = new QVBoxLayout(verticalWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        line_2 = new QFrame(verticalWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        borderBL = new QCheckBox(verticalWidget);
        borderBL->setObjectName(QString::fromUtf8("borderBL"));

        verticalLayout_9->addWidget(borderBL);

        borderTogether = new QCheckBox(verticalWidget);
        borderTogether->setObjectName(QString::fromUtf8("borderTogether"));
        borderTogether->setEnabled(false);

        verticalLayout_9->addWidget(borderTogether);


        horizontalLayout_5->addLayout(verticalLayout_9);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        borderBLEditRight = new QSpinBox(verticalWidget);
        borderBLEditRight->setObjectName(QString::fromUtf8("borderBLEditRight"));
        borderBLEditRight->setEnabled(false);
        borderBLEditRight->setValue(1);

        verticalLayout_5->addWidget(borderBLEditRight);

        borderBLEditDown = new QSpinBox(verticalWidget);
        borderBLEditDown->setObjectName(QString::fromUtf8("borderBLEditDown"));
        borderBLEditDown->setEnabled(false);
        borderBLEditDown->setValue(1);

        verticalLayout_5->addWidget(borderBLEditDown);

        borderBLEditTop = new QSpinBox(verticalWidget);
        borderBLEditTop->setObjectName(QString::fromUtf8("borderBLEditTop"));
        borderBLEditTop->setEnabled(false);
        borderBLEditTop->setValue(1);

        verticalLayout_5->addWidget(borderBLEditTop);

        borderBLEditLeft = new QSpinBox(verticalWidget);
        borderBLEditLeft->setObjectName(QString::fromUtf8("borderBLEditLeft"));
        borderBLEditLeft->setEnabled(false);
        borderBLEditLeft->setValue(1);

        verticalLayout_5->addWidget(borderBLEditLeft);


        horizontalLayout_5->addLayout(verticalLayout_5);


        verticalLayout_4->addLayout(horizontalLayout_5);

        line = new QFrame(verticalWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        cornerBL = new QCheckBox(verticalWidget);
        cornerBL->setObjectName(QString::fromUtf8("cornerBL"));
        cornerBL->setMinimumSize(QSize(72, 0));
        cornerBL->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_7->addWidget(cornerBL);

        cornerTogether = new QCheckBox(verticalWidget);
        cornerTogether->setObjectName(QString::fromUtf8("cornerTogether"));
        cornerTogether->setEnabled(false);

        verticalLayout_7->addWidget(cornerTogether);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        cornerBLEditLeftTop = new QSpinBox(verticalWidget);
        cornerBLEditLeftTop->setObjectName(QString::fromUtf8("cornerBLEditLeftTop"));
        cornerBLEditLeftTop->setEnabled(false);
        cornerBLEditLeftTop->setMaximum(137);

        verticalLayout_8->addWidget(cornerBLEditLeftTop);

        cornerBLEditRightDown = new QSpinBox(verticalWidget);
        cornerBLEditRightDown->setObjectName(QString::fromUtf8("cornerBLEditRightDown"));
        cornerBLEditRightDown->setEnabled(false);
        cornerBLEditRightDown->setMaximum(137);

        verticalLayout_8->addWidget(cornerBLEditRightDown);

        cornerBLEditRightTop = new QSpinBox(verticalWidget);
        cornerBLEditRightTop->setObjectName(QString::fromUtf8("cornerBLEditRightTop"));
        cornerBLEditRightTop->setEnabled(false);
        cornerBLEditRightTop->setMaximum(137);

        verticalLayout_8->addWidget(cornerBLEditRightTop);

        cornerBLEditLeftDown = new QSpinBox(verticalWidget);
        cornerBLEditLeftDown->setObjectName(QString::fromUtf8("cornerBLEditLeftDown"));
        cornerBLEditLeftDown->setEnabled(false);
        cornerBLEditLeftDown->setMaximum(137);

        verticalLayout_8->addWidget(cornerBLEditLeftDown);


        horizontalLayout_4->addLayout(verticalLayout_8);


        verticalLayout_4->addLayout(horizontalLayout_4);

        line_3 = new QFrame(verticalWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);


        gridLayout_4->addWidget(verticalWidget, 1, 2, 1, 1);

        horizontalWidget1 = new QWidget(tab);
        horizontalWidget1->setObjectName(QString::fromUtf8("horizontalWidget1"));
        horizontalWidget1->setMaximumSize(QSize(16777215, 25));
        horizontalLayout = new QHBoxLayout(horizontalWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gradientOne = new QRadioButton(horizontalWidget1);
        gradientOne->setObjectName(QString::fromUtf8("gradientOne"));

        horizontalLayout->addWidget(gradientOne);

        copyOne = new QComboBox(horizontalWidget1);
        copyOne->setObjectName(QString::fromUtf8("copyOne"));

        horizontalLayout->addWidget(copyOne);

        pos_One = new QDoubleSpinBox(horizontalWidget1);
        pos_One->setObjectName(QString::fromUtf8("pos_One"));
        pos_One->setEnabled(false);
        pos_One->setMaximum(1);
        pos_One->setValue(1);

        horizontalLayout->addWidget(pos_One);

        gradientTwo = new QRadioButton(horizontalWidget1);
        gradientTwo->setObjectName(QString::fromUtf8("gradientTwo"));

        horizontalLayout->addWidget(gradientTwo);

        copyTwo = new QComboBox(horizontalWidget1);
        copyTwo->setObjectName(QString::fromUtf8("copyTwo"));

        horizontalLayout->addWidget(copyTwo);

        pos_Two = new QDoubleSpinBox(horizontalWidget1);
        pos_Two->setObjectName(QString::fromUtf8("pos_Two"));
        pos_Two->setEnabled(false);
        pos_Two->setMaximum(1);
        pos_Two->setValue(1);

        horizontalLayout->addWidget(pos_Two);

        gradientThree = new QRadioButton(horizontalWidget1);
        gradientThree->setObjectName(QString::fromUtf8("gradientThree"));

        horizontalLayout->addWidget(gradientThree);

        pos_Three = new QDoubleSpinBox(horizontalWidget1);
        pos_Three->setObjectName(QString::fromUtf8("pos_Three"));
        pos_Three->setEnabled(false);
        pos_Three->setMaximum(1);
        pos_Three->setValue(1);

        horizontalLayout->addWidget(pos_Three);

        copyThree = new QComboBox(horizontalWidget1);
        copyThree->setObjectName(QString::fromUtf8("copyThree"));

        horizontalLayout->addWidget(copyThree);


        gridLayout_4->addWidget(horizontalWidget1, 0, 0, 1, 3);

        labelTest = new QLabel(tab);
        labelTest->setObjectName(QString::fromUtf8("labelTest"));
        labelTest->setMinimumSize(QSize(0, 250));
        labelTest->setFrameShape(QFrame::NoFrame);

        gridLayout_4->addWidget(labelTest, 1, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_2);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_4);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_3);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label);


        horizontalLayout_3->addLayout(verticalLayout_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        x_1 = new QDoubleSpinBox(tab);
        x_1->setObjectName(QString::fromUtf8("x_1"));
        x_1->setEnabled(true);

        verticalLayout_10->addWidget(x_1);

        y_1 = new QDoubleSpinBox(tab);
        y_1->setObjectName(QString::fromUtf8("y_1"));
        y_1->setEnabled(true);

        verticalLayout_10->addWidget(y_1);

        x_2 = new QDoubleSpinBox(tab);
        x_2->setObjectName(QString::fromUtf8("x_2"));
        x_2->setEnabled(true);

        verticalLayout_10->addWidget(x_2);

        y_2 = new QDoubleSpinBox(tab);
        y_2->setObjectName(QString::fromUtf8("y_2"));
        y_2->setEnabled(true);

        verticalLayout_10->addWidget(y_2);


        horizontalLayout_3->addLayout(verticalLayout_10);


        gridLayout_4->addLayout(horizontalLayout_3, 9, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_2->addWidget(textBrowser, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ColorEdit);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ColorEdit);
    } // setupUi

    void retranslateUi(QDialog *ColorEdit)
    {
        ColorEdit->setWindowTitle(QApplication::translate("ColorEdit", "ColorEdit", 0, QApplication::UnicodeUTF8));
        label_R->setText(QApplication::translate("ColorEdit", "R", 0, QApplication::UnicodeUTF8));
        label_G->setText(QApplication::translate("ColorEdit", "G", 0, QApplication::UnicodeUTF8));
        label_B->setText(QApplication::translate("ColorEdit", "B", 0, QApplication::UnicodeUTF8));
        borderBL->setText(QApplication::translate("ColorEdit", "\320\223\321\200\320\260\320\275\320\270\321\206\320\260", 0, QApplication::UnicodeUTF8));
        borderTogether->setText(QApplication::translate("ColorEdit", "\320\241\320\262\321\217\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        cornerBL->setText(QApplication::translate("ColorEdit", "\320\243\320\263\320\276\320\273", 0, QApplication::UnicodeUTF8));
        cornerTogether->setText(QApplication::translate("ColorEdit", "\320\241\320\262\321\217\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        gradientOne->setText(QApplication::translate("ColorEdit", "\320\223\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \342\204\226 1", 0, QApplication::UnicodeUTF8));
        gradientTwo->setText(QApplication::translate("ColorEdit", "\320\223\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \342\204\226 2", 0, QApplication::UnicodeUTF8));
        gradientThree->setText(QApplication::translate("ColorEdit", "\320\223\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \342\204\226 3", 0, QApplication::UnicodeUTF8));
        labelTest->setText(QString());
        label_2->setText(QApplication::translate("ColorEdit", "X1", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ColorEdit", "Y1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ColorEdit", "X2", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ColorEdit", "Y2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ColorEdit", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ColorEdit", "Qt css", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorEdit: public Ui_ColorEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOREDIT_H
