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

#ifndef COLOREDIT_H
#define COLOREDIT_H

#include <QDialog>
#include <QColor>

namespace Ui {
class ColorEdit;
}

class ColorEdit : public QDialog
{
    Q_OBJECT
    
public:
    explicit ColorEdit(QWidget *parent = 0);
    ~ColorEdit();
    
private:
    Ui::ColorEdit *ui;
    QColor oneColor;
    QColor twoColor;
    QColor threeColor;

    QString noCopy;
    QString copyInOne;
    QString copyInTwo;
    QString copyInThree;

    QString cornerGradient;

private slots:
    void createStyleSheetOneGradient();
    void createStyleSheetTwoGradient();
    void createStyleSheetThreeGradient();

    void showPageOne();
    void showPageTwo();
    void showPageThree();

    void connectCornerEdit(bool);
    void connectBorderEdit(bool);

    void copyOneTwo();
    void copyOneThree();
    void copyTwoOne();
    void copyTwoThree();
    void copyThreeOne();
    void copyThreeTwo();

    void setTextBrouser(QString);

    void setCornerGradient();

signals:
    void getStyleSheet(QString);
};

#endif // COLOREDIT_H
