/****************************************************************************
** Meta object code from reading C++ file 'coloredit.h'
**
** Created: Sat Nov 10 21:07:47 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "coloredit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coloredit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ColorEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   10,   10,   10, 0x08,
      64,   10,   10,   10, 0x08,
      94,   10,   10,   10, 0x08,
     126,   10,   10,   10, 0x08,
     140,   10,   10,   10, 0x08,
     154,   10,   10,   10, 0x08,
     170,   10,   10,   10, 0x08,
     194,   10,   10,   10, 0x08,
     218,   10,   10,   10, 0x08,
     231,   10,   10,   10, 0x08,
     246,   10,   10,   10, 0x08,
     259,   10,   10,   10, 0x08,
     274,   10,   10,   10, 0x08,
     289,   10,   10,   10, 0x08,
     304,   10,   10,   10, 0x08,
     328,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ColorEdit[] = {
    "ColorEdit\0\0getStyleSheet(QString)\0"
    "createStyleSheetOneGradient()\0"
    "createStyleSheetTwoGradient()\0"
    "createStyleSheetThreeGradient()\0"
    "showPageOne()\0showPageTwo()\0showPageThree()\0"
    "connectCornerEdit(bool)\0connectBorderEdit(bool)\0"
    "copyOneTwo()\0copyOneThree()\0copyTwoOne()\0"
    "copyTwoThree()\0copyThreeOne()\0"
    "copyThreeTwo()\0setTextBrouser(QString)\0"
    "setCornerGradient()\0"
};

void ColorEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorEdit *_t = static_cast<ColorEdit *>(_o);
        switch (_id) {
        case 0: _t->getStyleSheet((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->createStyleSheetOneGradient(); break;
        case 2: _t->createStyleSheetTwoGradient(); break;
        case 3: _t->createStyleSheetThreeGradient(); break;
        case 4: _t->showPageOne(); break;
        case 5: _t->showPageTwo(); break;
        case 6: _t->showPageThree(); break;
        case 7: _t->connectCornerEdit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->connectBorderEdit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->copyOneTwo(); break;
        case 10: _t->copyOneThree(); break;
        case 11: _t->copyTwoOne(); break;
        case 12: _t->copyTwoThree(); break;
        case 13: _t->copyThreeOne(); break;
        case 14: _t->copyThreeTwo(); break;
        case 15: _t->setTextBrouser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->setCornerGradient(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ColorEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorEdit::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ColorEdit,
      qt_meta_data_ColorEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorEdit))
        return static_cast<void*>(const_cast< ColorEdit*>(this));
    return QDialog::qt_metacast(_clname);
}

int ColorEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void ColorEdit::getStyleSheet(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
