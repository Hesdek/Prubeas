/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *table_w;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_2;
    QLabel *label_11;
    QSpinBox *radio;
    QPushButton *add_btn;
    QPushButton *del_btn;
    QPushButton *up_btn;
    QPushButton *play_btn;
    QLabel *label_5;
    QFrame *line_3;
    QPushButton *pause_btn;
    QPushButton *stop_btn;
    QLabel *label_9;
    QDoubleSpinBox *mass_double;
    QSpinBox *ten_pow;
    QLabel *label_10;
    QDoubleSpinBox *x0_double;
    QLabel *label_3;
    QDoubleSpinBox *y0_double;
    QLabel *label_7;
    QDoubleSpinBox *vx0_double;
    QLabel *label_8;
    QDoubleSpinBox *vy0_double;
    QLabel *label_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1144, 702);
        QFont font;
        font.setFamily(QString::fromUtf8("Ebrima"));
        font.setPointSize(10);
        Widget->setFont(font);
        table_w = new QTableWidget(Widget);
        table_w->setObjectName(QString::fromUtf8("table_w"));
        table_w->setGeometry(QRect(712, 65, 422, 191));
        table_w->setFont(font);
        table_w->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(720, 15, 121, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ebrima"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(720, 35, 401, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(720, 300, 401, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(720, 280, 71, 31));
        label_2->setFont(font1);
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(1003, 398, 40, 21));
        QFont font2;
        font2.setPointSize(12);
        label_11->setFont(font2);
        radio = new QSpinBox(Widget);
        radio->setObjectName(QString::fromUtf8("radio"));
        radio->setGeometry(QRect(1050, 397, 46, 24));
        QFont font3;
        font3.setPointSize(10);
        radio->setFont(font3);
        radio->setMinimum(1);
        radio->setMaximum(750);
        add_btn = new QPushButton(Widget);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setGeometry(QRect(750, 445, 101, 31));
        add_btn->setFont(font3);
        del_btn = new QPushButton(Widget);
        del_btn->setObjectName(QString::fromUtf8("del_btn"));
        del_btn->setEnabled(false);
        del_btn->setGeometry(QRect(986, 445, 111, 31));
        del_btn->setFont(font3);
        up_btn = new QPushButton(Widget);
        up_btn->setObjectName(QString::fromUtf8("up_btn"));
        up_btn->setEnabled(false);
        up_btn->setGeometry(QRect(862, 445, 111, 31));
        up_btn->setFont(font3);
        play_btn = new QPushButton(Widget);
        play_btn->setObjectName(QString::fromUtf8("play_btn"));
        play_btn->setEnabled(false);
        play_btn->setGeometry(QRect(780, 582, 70, 70));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(720, 510, 101, 31));
        label_5->setFont(font1);
        line_3 = new QFrame(Widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(720, 530, 401, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pause_btn = new QPushButton(Widget);
        pause_btn->setObjectName(QString::fromUtf8("pause_btn"));
        pause_btn->setEnabled(false);
        pause_btn->setGeometry(QRect(890, 582, 70, 70));
        stop_btn = new QPushButton(Widget);
        stop_btn->setObjectName(QString::fromUtf8("stop_btn"));
        stop_btn->setEnabled(false);
        stop_btn->setGeometry(QRect(1000, 582, 70, 70));
        label_9 = new QLabel(Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(761, 398, 36, 21));
        label_9->setFont(font2);
        mass_double = new QDoubleSpinBox(Widget);
        mass_double->setObjectName(QString::fromUtf8("mass_double"));
        mass_double->setGeometry(QRect(809, 397, 78, 24));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Ebrima"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        mass_double->setFont(font4);
        mass_double->setDecimals(3);
        mass_double->setMinimum(0.001000000000000);
        mass_double->setMaximum(10.000000000000000);
        mass_double->setSingleStep(0.001000000000000);
        mass_double->setValue(1.000000000000000);
        ten_pow = new QSpinBox(Widget);
        ten_pow->setObjectName(QString::fromUtf8("ten_pow"));
        ten_pow->setGeometry(QRect(933, 397, 40, 24));
        ten_pow->setFont(font3);
        label_10 = new QLabel(Widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(892, 398, 40, 21));
        label_10->setFont(font2);
        x0_double = new QDoubleSpinBox(Widget);
        x0_double->setObjectName(QString::fromUtf8("x0_double"));
        x0_double->setGeometry(QRect(809, 329, 78, 24));
        x0_double->setFont(font4);
        x0_double->setMinimum(-8000.000000000000000);
        x0_double->setMaximum(8000.000000000000000);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(752, 329, 51, 21));
        label_3->setFont(font2);
        y0_double = new QDoubleSpinBox(Widget);
        y0_double->setObjectName(QString::fromUtf8("y0_double"));
        y0_double->setGeometry(QRect(809, 360, 78, 24));
        y0_double->setFont(font4);
        y0_double->setMinimum(-8000.000000000000000);
        y0_double->setMaximum(8000.000000000000000);
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(752, 360, 51, 21));
        label_7->setFont(font2);
        vx0_double = new QDoubleSpinBox(Widget);
        vx0_double->setObjectName(QString::fromUtf8("vx0_double"));
        vx0_double->setGeometry(QRect(1017, 329, 78, 24));
        vx0_double->setFont(font4);
        vx0_double->setMinimum(-8000.000000000000000);
        vx0_double->setMaximum(8000.000000000000000);
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(952, 329, 59, 21));
        label_8->setFont(font2);
        vy0_double = new QDoubleSpinBox(Widget);
        vy0_double->setObjectName(QString::fromUtf8("vy0_double"));
        vy0_double->setGeometry(QRect(1018, 360, 78, 24));
        vy0_double->setFont(font4);
        vy0_double->setMinimum(-8000.000000000000000);
        vy0_double->setMaximum(8000.000000000000000);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(952, 360, 60, 21));
        label_4->setFont(font2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "Initial Values", nullptr));
        label_2->setText(QApplication::translate("Widget", "Modify", nullptr));
        label_11->setText(QApplication::translate("Widget", "Radio", nullptr));
        add_btn->setText(QApplication::translate("Widget", "Add Astro", nullptr));
        del_btn->setText(QApplication::translate("Widget", "Delete Astro", nullptr));
        up_btn->setText(QApplication::translate("Widget", "Update Astro", nullptr));
        play_btn->setText(QString());
        label_5->setText(QApplication::translate("Widget", "Simulation", nullptr));
        pause_btn->setText(QString());
        stop_btn->setText(QString());
        label_9->setText(QApplication::translate("Widget", "Mass", nullptr));
        label_10->setText(QApplication::translate("Widget", "x 10^", nullptr));
        label_3->setText(QApplication::translate("Widget", "Initial X", nullptr));
        label_7->setText(QApplication::translate("Widget", "Initial Y", nullptr));
        label_8->setText(QApplication::translate("Widget", "Initial Vx", nullptr));
        label_4->setText(QApplication::translate("Widget", "Initial Vy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
