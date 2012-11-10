/**
 * Easy work - writed by KeyGen 2012
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#include "coloredit.h"
#include "ui_coloredit.h"

#include <QDebug>

ColorEdit::ColorEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ColorEdit)
{
    ui->setupUi(this);

    ui->x_1->setValue(0.0);
    ui->y_1->setValue(0.5);
    ui->x_2->setValue(1.0);
    ui->y_2->setValue(0.5);

    cornerGradient = "x1:"
            + QString::number(ui->x_1->value()) +
            ", y1:"
            + QString::number(ui->y_1->value()) +
            ", x2:"
            + QString::number(ui->x_2->value()) +
            ", y2:"
            + QString::number(ui->y_2->value()) +
            ",";

    connect(ui->x_1,SIGNAL(valueChanged(double)),this,SLOT(setCornerGradient()));
    connect(ui->y_1,SIGNAL(valueChanged(double)),this,SLOT(setCornerGradient()));
    connect(ui->x_2,SIGNAL(valueChanged(double)),this,SLOT(setCornerGradient()));
    connect(ui->y_2,SIGNAL(valueChanged(double)),this,SLOT(setCornerGradient()));

    noCopy = "No copy";
    copyInOne = "Copy in №1";
    copyInTwo = "Copy in №2";
    copyInThree = "Copy in №3";

    oneColor.setRgb(0,0,0);
    twoColor.setRgb(0,0,0);
    threeColor.setRgb(0,0,0);

    ui->copyOne->addItem(noCopy);
    ui->copyOne->addItem(copyInTwo);
    ui->copyOne->addItem(copyInThree);

    ui->copyTwo->addItem(noCopy);
    ui->copyTwo->addItem(copyInOne);
    ui->copyTwo->addItem(copyInThree);

    ui->copyThree->addItem(noCopy);
    ui->copyThree->addItem(copyInOne);
    ui->copyThree->addItem(copyInTwo);

    connect(this,SIGNAL(getStyleSheet(QString)),ui->labelTest,SLOT(setStyleSheet(QString)));

    connect(ui->OneSliderR,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetOneGradient()));
    connect(ui->OneSliderG,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetOneGradient()));
    connect(ui->OneSliderB,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetOneGradient()));

    connect(ui->TwoSliderR,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetTwoGradient()));
    connect(ui->TwoSliderG,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetTwoGradient()));
    connect(ui->TwoSliderB,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetTwoGradient()));

    connect(ui->ThreeSliderR,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetThreeGradient()));
    connect(ui->ThreeSliderG,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetThreeGradient()));
    connect(ui->ThreeSliderB,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetThreeGradient()));

    connect(ui->gradientOne,SIGNAL(toggled(bool)),ui->pos_One,SLOT(setEnabled(bool)));
    connect(ui->gradientTwo,SIGNAL(toggled(bool)),ui->pos_Two,SLOT(setEnabled(bool)));
    connect(ui->gradientThree,SIGNAL(toggled(bool)),ui->pos_Three,SLOT(setEnabled(bool)));

    connect(ui->gradientOne,SIGNAL(clicked()),this,SLOT(showPageOne()));
    connect(ui->gradientTwo,SIGNAL(clicked()),this,SLOT(showPageTwo()));
    connect(ui->gradientThree,SIGNAL(clicked()),this,SLOT(showPageThree()));

    connect(ui->OneSliderR,SIGNAL(sliderMoved(int)),ui->OneValueColorR,SLOT(setValue(int)));
    connect(ui->OneValueColorR,SIGNAL(valueChanged(int)),ui->OneSliderR,SLOT(setValue(int)));
    connect(ui->OneSliderG,SIGNAL(sliderMoved(int)),ui->OneValueColorG,SLOT(setValue(int)));
    connect(ui->OneValueColorG,SIGNAL(valueChanged(int)),ui->OneSliderG,SLOT(setValue(int)));
    connect(ui->OneSliderB,SIGNAL(sliderMoved(int)),ui->OneValueColorB,SLOT(setValue(int)));
    connect(ui->OneValueColorB,SIGNAL(valueChanged(int)),ui->OneSliderB,SLOT(setValue(int)));

    connect(ui->TwoSliderR,SIGNAL(sliderMoved(int)),ui->TwoValueColorR,SLOT(setValue(int)));
    connect(ui->TwoValueColorR,SIGNAL(valueChanged(int)),ui->TwoSliderR,SLOT(setValue(int)));
    connect(ui->TwoSliderG,SIGNAL(sliderMoved(int)),ui->TwoValueColorG,SLOT(setValue(int)));
    connect(ui->TwoValueColorG,SIGNAL(valueChanged(int)),ui->TwoSliderG,SLOT(setValue(int)));
    connect(ui->TwoSliderB,SIGNAL(sliderMoved(int)),ui->TwoValueColorB,SLOT(setValue(int)));
    connect(ui->TwoValueColorB,SIGNAL(valueChanged(int)),ui->TwoSliderB,SLOT(setValue(int)));

    connect(ui->ThreeSliderR,SIGNAL(sliderMoved(int)),ui->ThreeValueColorR,SLOT(setValue(int)));
    connect(ui->ThreeValueColorR,SIGNAL(valueChanged(int)),ui->ThreeSliderR,SLOT(setValue(int)));
    connect(ui->ThreeSliderG,SIGNAL(sliderMoved(int)),ui->ThreeValueColorG,SLOT(setValue(int)));
    connect(ui->ThreeValueColorG,SIGNAL(valueChanged(int)),ui->ThreeSliderG,SLOT(setValue(int)));
    connect(ui->ThreeSliderB,SIGNAL(sliderMoved(int)),ui->ThreeValueColorB,SLOT(setValue(int)));
    connect(ui->ThreeValueColorB,SIGNAL(valueChanged(int)),ui->ThreeSliderB,SLOT(setValue(int)));

    connect(ui->pos_One,SIGNAL(valueChanged(double)),this,SLOT(createStyleSheetOneGradient()));
    connect(ui->pos_Two,SIGNAL(valueChanged(double)),this,SLOT(createStyleSheetTwoGradient()));
    connect(ui->pos_Three,SIGNAL(valueChanged(double)),this,SLOT(createStyleSheetThreeGradient()));

    connect(ui->borderBL,SIGNAL(toggled(bool)),ui->borderBLEditDown,SLOT(setEnabled(bool)));
    connect(ui->borderBL,SIGNAL(toggled(bool)),ui->borderBLEditTop,SLOT(setEnabled(bool)));
    connect(ui->borderBL,SIGNAL(toggled(bool)),ui->borderBLEditLeft,SLOT(setEnabled(bool)));
    connect(ui->borderBL,SIGNAL(toggled(bool)),ui->borderBLEditRight,SLOT(setEnabled(bool)));
    connect(ui->borderBL,SIGNAL(toggled(bool)),ui->borderTogether,SLOT(setEnabled(bool)));

    connect(ui->borderBLEditDown,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetOneGradient()));
    connect(ui->borderBLEditTop,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetOneGradient()));
    connect(ui->borderBLEditLeft,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetOneGradient()));
    connect(ui->borderBLEditRight,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetOneGradient()));

    connect(ui->cornerBL,SIGNAL(toggled(bool)),ui->cornerBLEditLeftTop,SLOT(setEnabled(bool)));
    connect(ui->cornerBL,SIGNAL(toggled(bool)),ui->cornerBLEditLeftDown,SLOT(setEnabled(bool)));
    connect(ui->cornerBL,SIGNAL(toggled(bool)),ui->cornerBLEditRightTop,SLOT(setEnabled(bool)));
    connect(ui->cornerBL,SIGNAL(toggled(bool)),ui->cornerBLEditRightDown,SLOT(setEnabled(bool)));
    connect(ui->cornerBL,SIGNAL(toggled(bool)),ui->cornerTogether,SLOT(setEnabled(bool)));

    connect(ui->cornerBLEditLeftTop,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetOneGradient()));
    connect(ui->cornerBLEditLeftDown,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetOneGradient()));
    connect(ui->cornerBLEditRightTop,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetOneGradient()));
    connect(ui->cornerBLEditRightDown,SIGNAL(valueChanged(int)),this,SLOT(createStyleSheetOneGradient()));

    connect(ui->borderTogether,SIGNAL(toggled(bool)),this,SLOT(connectBorderEdit(bool)));
    connect(ui->cornerTogether,SIGNAL(toggled(bool)),this,SLOT(connectCornerEdit(bool)));

    connect(ui->cornerBL,SIGNAL(clicked()),this,SLOT(createStyleSheetOneGradient()));
    connect(ui->borderBL,SIGNAL(clicked()),this,SLOT(createStyleSheetOneGradient()));

    ui->gradientOne->click();
    ui->cornerTogether->toggle();
    ui->borderTogether->toggle();

    ui->pos_One->setValue(0.0);
    ui->pos_Two->setValue(0.5);
    ui->pos_Three->setValue(1.0);

}

void ColorEdit::setTextBrouser(QString str){

    str.replace(";",";\n");

    ui->textBrowser->setText(str);
}

void ColorEdit::copyOneTwo(){
    ui->TwoValueColorR->setValue(ui->OneValueColorR->value());
    ui->TwoValueColorG->setValue(ui->OneValueColorG->value());
    ui->TwoValueColorB->setValue(ui->OneValueColorB->value());
}

void ColorEdit::copyOneThree(){
    ui->ThreeValueColorR->setValue(ui->OneValueColorR->value());
    ui->ThreeValueColorG->setValue(ui->OneValueColorG->value());
    ui->ThreeValueColorB->setValue(ui->OneValueColorB->value());
}

void ColorEdit::copyTwoOne(){
    ui->OneValueColorR->setValue(ui->TwoValueColorR->value());
    ui->OneValueColorG->setValue(ui->TwoValueColorG->value());
    ui->OneValueColorB->setValue(ui->TwoValueColorB->value());
}

void ColorEdit::copyTwoThree(){
    ui->ThreeValueColorR->setValue(ui->TwoValueColorR->value());
    ui->ThreeValueColorG->setValue(ui->TwoValueColorG->value());
    ui->ThreeValueColorB->setValue(ui->TwoValueColorB->value());
}

void ColorEdit::copyThreeOne(){
    ui->OneValueColorR->setValue(ui->ThreeValueColorR->value());
    ui->OneValueColorG->setValue(ui->ThreeValueColorG->value());
    ui->OneValueColorB->setValue(ui->ThreeValueColorB->value());
}

void ColorEdit::copyThreeTwo(){
    ui->TwoValueColorR->setValue(ui->ThreeValueColorR->value());
    ui->TwoValueColorG->setValue(ui->ThreeValueColorG->value());
    ui->TwoValueColorB->setValue(ui->ThreeValueColorB->value());
}

void ColorEdit::connectCornerEdit(bool BL){

    if(BL){
        connect(ui->cornerBLEditLeftTop,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftDown,SLOT(setValue(int)));
        connect(ui->cornerBLEditLeftTop,SIGNAL(valueChanged(int)),ui->cornerBLEditRightTop,SLOT(setValue(int)));
        connect(ui->cornerBLEditLeftTop,SIGNAL(valueChanged(int)),ui->cornerBLEditRightDown,SLOT(setValue(int)));

        connect(ui->cornerBLEditLeftDown,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftTop,SLOT(setValue(int)));
        connect(ui->cornerBLEditLeftDown,SIGNAL(valueChanged(int)),ui->cornerBLEditRightTop,SLOT(setValue(int)));
        connect(ui->cornerBLEditLeftDown,SIGNAL(valueChanged(int)),ui->cornerBLEditRightDown,SLOT(setValue(int)));

        connect(ui->cornerBLEditRightTop,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftDown,SLOT(setValue(int)));
        connect(ui->cornerBLEditRightTop,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftTop,SLOT(setValue(int)));
        connect(ui->cornerBLEditRightTop,SIGNAL(valueChanged(int)),ui->cornerBLEditRightDown,SLOT(setValue(int)));

        connect(ui->cornerBLEditRightDown,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftDown,SLOT(setValue(int)));
        connect(ui->cornerBLEditRightDown,SIGNAL(valueChanged(int)),ui->cornerBLEditRightTop,SLOT(setValue(int)));
        connect(ui->cornerBLEditRightDown,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftTop,SLOT(setValue(int)));

    }
    else{
        disconnect(ui->cornerBLEditLeftTop,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftDown,SLOT(setValue(int)));
        disconnect(ui->cornerBLEditLeftTop,SIGNAL(valueChanged(int)),ui->cornerBLEditRightTop,SLOT(setValue(int)));
        disconnect(ui->cornerBLEditLeftTop,SIGNAL(valueChanged(int)),ui->cornerBLEditRightDown,SLOT(setValue(int)));

        disconnect(ui->cornerBLEditLeftDown,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftTop,SLOT(setValue(int)));
        disconnect(ui->cornerBLEditLeftDown,SIGNAL(valueChanged(int)),ui->cornerBLEditRightTop,SLOT(setValue(int)));
        disconnect(ui->cornerBLEditLeftDown,SIGNAL(valueChanged(int)),ui->cornerBLEditRightDown,SLOT(setValue(int)));

        disconnect(ui->cornerBLEditRightTop,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftDown,SLOT(setValue(int)));
        disconnect(ui->cornerBLEditRightTop,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftTop,SLOT(setValue(int)));
        disconnect(ui->cornerBLEditRightTop,SIGNAL(valueChanged(int)),ui->cornerBLEditRightDown,SLOT(setValue(int)));

        disconnect(ui->cornerBLEditRightDown,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftDown,SLOT(setValue(int)));
        disconnect(ui->cornerBLEditRightDown,SIGNAL(valueChanged(int)),ui->cornerBLEditRightTop,SLOT(setValue(int)));
        disconnect(ui->cornerBLEditRightDown,SIGNAL(valueChanged(int)),ui->cornerBLEditLeftTop,SLOT(setValue(int)));
    }
}

void ColorEdit::connectBorderEdit(bool BL){

    if(BL){
        connect(ui->borderBLEditDown,SIGNAL(valueChanged(int)),ui->borderBLEditTop,SLOT(setValue(int)));
        connect(ui->borderBLEditDown,SIGNAL(valueChanged(int)),ui->borderBLEditLeft,SLOT(setValue(int)));
        connect(ui->borderBLEditDown,SIGNAL(valueChanged(int)),ui->borderBLEditRight,SLOT(setValue(int)));

        connect(ui->borderBLEditTop,SIGNAL(valueChanged(int)),ui->borderBLEditDown,SLOT(setValue(int)));
        connect(ui->borderBLEditTop,SIGNAL(valueChanged(int)),ui->borderBLEditLeft,SLOT(setValue(int)));
        connect(ui->borderBLEditTop,SIGNAL(valueChanged(int)),ui->borderBLEditRight,SLOT(setValue(int)));

        connect(ui->borderBLEditLeft,SIGNAL(valueChanged(int)),ui->borderBLEditTop,SLOT(setValue(int)));
        connect(ui->borderBLEditLeft,SIGNAL(valueChanged(int)),ui->borderBLEditDown,SLOT(setValue(int)));
        connect(ui->borderBLEditLeft,SIGNAL(valueChanged(int)),ui->borderBLEditRight,SLOT(setValue(int)));

        connect(ui->borderBLEditRight,SIGNAL(valueChanged(int)),ui->borderBLEditTop,SLOT(setValue(int)));
        connect(ui->borderBLEditRight,SIGNAL(valueChanged(int)),ui->borderBLEditLeft,SLOT(setValue(int)));
        connect(ui->borderBLEditRight,SIGNAL(valueChanged(int)),ui->borderBLEditDown,SLOT(setValue(int)));

    }
    else{
        disconnect(ui->borderBLEditDown,SIGNAL(valueChanged(int)),ui->borderBLEditTop,SLOT(setValue(int)));
        disconnect(ui->borderBLEditDown,SIGNAL(valueChanged(int)),ui->borderBLEditLeft,SLOT(setValue(int)));
        disconnect(ui->borderBLEditDown,SIGNAL(valueChanged(int)),ui->borderBLEditRight,SLOT(setValue(int)));

        disconnect(ui->borderBLEditTop,SIGNAL(valueChanged(int)),ui->borderBLEditDown,SLOT(setValue(int)));
        disconnect(ui->borderBLEditTop,SIGNAL(valueChanged(int)),ui->borderBLEditLeft,SLOT(setValue(int)));
        disconnect(ui->borderBLEditTop,SIGNAL(valueChanged(int)),ui->borderBLEditRight,SLOT(setValue(int)));

        disconnect(ui->borderBLEditLeft,SIGNAL(valueChanged(int)),ui->borderBLEditTop,SLOT(setValue(int)));
        disconnect(ui->borderBLEditLeft,SIGNAL(valueChanged(int)),ui->borderBLEditDown,SLOT(setValue(int)));
        disconnect(ui->borderBLEditLeft,SIGNAL(valueChanged(int)),ui->borderBLEditRight,SLOT(setValue(int)));

        disconnect(ui->borderBLEditRight,SIGNAL(valueChanged(int)),ui->borderBLEditTop,SLOT(setValue(int)));
        disconnect(ui->borderBLEditRight,SIGNAL(valueChanged(int)),ui->borderBLEditLeft,SLOT(setValue(int)));
        disconnect(ui->borderBLEditRight,SIGNAL(valueChanged(int)),ui->borderBLEditDown,SLOT(setValue(int)));
    }
}

void ColorEdit::createStyleSheetOneGradient(){

    oneColor.setRgb(ui->OneSliderR->value(),ui->OneSliderG->value(),ui->OneSliderB->value());

    ui->colorEditOneRGB->setText(oneColor.name());
    ui->colorEditOneRHtml->setText(oneColor.name().toUpper());
    ui->colorEditOnerHtml->setText(QString::number(oneColor.red()) + ","
                                   + QString::number(oneColor.green()) + ","
                                   + QString::number(oneColor.blue()));

    QString style = "background: qlineargradient("
                    + cornerGradient +
                    " stop:" + QString::number(ui->pos_One->value())
                    + " " + oneColor.name() + ","
                    " stop:" + QString::number(ui->pos_Two->value())
                    + " " + twoColor.name() + ","
                    " stop:" + QString::number(ui->pos_Three->value())
                    + " " + threeColor.name()
                    + ");";

    if(ui->borderBL->isChecked()){

        QString styleBorder = "border-style: solid;";

         styleBorder += "border-width: "
                 + QString::number(ui->borderBLEditRight->value()) +

                "px "
                + QString::number(ui->borderBLEditLeft->value()) +
                "px "

                 + QString::number(ui->borderBLEditTop->value()) +
                "px "

                 + QString::number(ui->borderBLEditDown->value()) +
                "px;";

        style += styleBorder;
    }

    if(ui->cornerBL->isChecked()){

        QString styleCorner = "border-radius: 0px;";

         styleCorner += "border-top-left-radius: "
                + QString::number(ui->cornerBLEditLeftTop->value()) +
                "px;border-top-right-radius: "
                + QString::number(ui->cornerBLEditLeftDown->value()) +
                "px;border-bottom-right-radius: "
                + QString::number(ui->cornerBLEditRightTop->value()) +
                "px;border-bottom-left-radius: "
                + QString::number(ui->cornerBLEditRightDown->value()) +
                "px;";

        style += styleCorner;
    }

    ui->labelTest->setStyleSheet(style);

    setTextBrouser(style);

    if(ui->copyOne->currentText() == copyInTwo)
        this->copyOneTwo();

    if(ui->copyOne->currentText() == copyInThree)
        this->copyOneThree();
}

void ColorEdit::createStyleSheetTwoGradient(){

    twoColor.setRgb(ui->TwoSliderR->value(),ui->TwoSliderG->value(),ui->TwoSliderB->value());

    ui->colorEditTwoRGB->setText(twoColor.name());
    ui->colorEditTwoRHtml->setText(twoColor.name().toUpper());
    ui->colorEditTworHtml->setText(QString::number(twoColor.red()) + ","
                                   + QString::number(twoColor.green()) + ","
                                   + QString::number(twoColor.blue()));

    QString style = "background: qlineargradient("
                    + cornerGradient +
                    " stop:" + QString::number(ui->pos_One->value())
                    + " " + oneColor.name() + ","
                    " stop:" + QString::number(ui->pos_Two->value())
                    + " " + twoColor.name() + ","
                    " stop:" + QString::number(ui->pos_Three->value())
                    + " " + threeColor.name()
                    + ");";

    if(ui->borderBL->isChecked()){

        QString styleBorder = "border-style: solid;";

         styleBorder += "border-width: "
                 + QString::number(ui->borderBLEditRight->value()) +

                "px "
                + QString::number(ui->borderBLEditLeft->value()) +
                "px "

                 + QString::number(ui->borderBLEditTop->value()) +
                "px "

                 + QString::number(ui->borderBLEditDown->value()) +
                "px;";

        style += styleBorder;
    }

    if(ui->cornerBL->isChecked()){

        QString styleCorner = "border-radius: 0px;";

         styleCorner += "border-top-left-radius: "
                + QString::number(ui->cornerBLEditLeftTop->value()) +
                "px;border-top-right-radius: "
                + QString::number(ui->cornerBLEditLeftDown->value()) +
                "px;border-bottom-right-radius: "
                + QString::number(ui->cornerBLEditRightTop->value()) +
                "px;border-bottom-left-radius: "
                + QString::number(ui->cornerBLEditRightDown->value()) +
                "px;";

        style += styleCorner;
    }

    ui->labelTest->setStyleSheet(style);

    ui->labelTest->setStyleSheet(style);

    if(ui->copyTwo->currentText() == copyInOne)
        this->copyTwoOne();

    if(ui->copyTwo->currentText() == copyInThree)
        this->copyTwoThree();
}

void ColorEdit::createStyleSheetThreeGradient(){

    threeColor.setRgb(ui->ThreeSliderR->value(),ui->ThreeSliderG->value(),ui->ThreeSliderB->value());

    ui->colorEditThreeRGB->setText(threeColor.name());
    ui->colorEditThreeRHtml->setText(threeColor.name().toUpper());
    ui->colorEditThreerHtml->setText(QString::number(threeColor.red()) + ","
                                   + QString::number(threeColor.green()) + ","
                                   + QString::number(threeColor.blue()));

    QString style = "background: qlineargradient("
                    + cornerGradient +
                    " stop:" + QString::number(ui->pos_One->value())
                    + " " + oneColor.name() + ","
                    " stop:" + QString::number(ui->pos_Two->value())
                    + " " + twoColor.name() + ","
                    " stop:" + QString::number(ui->pos_Three->value())
                    + " " + threeColor.name()
                    + ");";

    if(ui->borderBL->isChecked()){

        QString styleBorder = "border-style: solid;";

         styleBorder += "border-width: "
                 + QString::number(ui->borderBLEditRight->value()) +

                "px "
                + QString::number(ui->borderBLEditLeft->value()) +
                "px "

                 + QString::number(ui->borderBLEditTop->value()) +
                "px "

                 + QString::number(ui->borderBLEditDown->value()) +
                "px;";

        style += styleBorder;
    }

    if(ui->cornerBL->isChecked()){

        QString styleCorner = "border-radius: 0px;";

         styleCorner += "border-top-left-radius: "
                + QString::number(ui->cornerBLEditLeftTop->value()) +
                "px;border-top-right-radius: "
                + QString::number(ui->cornerBLEditLeftDown->value()) +
                "px;border-bottom-right-radius: "
                + QString::number(ui->cornerBLEditRightTop->value()) +
                "px;border-bottom-left-radius: "
                + QString::number(ui->cornerBLEditRightDown->value()) +
                "px;";

        style += styleCorner;
    }

    ui->labelTest->setStyleSheet(style);

    if(ui->copyThree->currentText() == copyInOne)
        this->copyThreeOne();

    if(ui->copyThree->currentText() == copyInTwo)
        this->copyThreeTwo();

    ui->labelTest->setStyleSheet(style);
}

void ColorEdit::showPageOne(){
    ui->stackedWidget->setCurrentIndex(0);
}

void ColorEdit::showPageTwo(){
    ui->stackedWidget->setCurrentIndex(2);
}

void ColorEdit::showPageThree(){
    ui->stackedWidget->setCurrentIndex(1);
}

void ColorEdit::setCornerGradient(){

    cornerGradient = "x1:"
            + QString::number(ui->x_1->value()) +
            ", y1:"
            + QString::number(ui->y_1->value()) +
            ", x2:"
            + QString::number(ui->x_2->value()) +
            ", y2:"
            + QString::number(ui->y_2->value()) +
            ",";

    createStyleSheetOneGradient();
}

ColorEdit::~ColorEdit()
{
    delete ui;
}
