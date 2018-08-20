/********************************************************************************
** Form generated from reading UI file 'dashcoinwallet.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHCOINWALLET_H
#define UI_DASHCOINWALLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoneroWallet
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *panel_main;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabs_wallet;
    QWidget *tab_overview;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFrame *line;
    QWidget *panel_overview;
    QFormLayout *formLayout;
    QWidget *panel_password;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_16;
    QComboBox *select_wallet;
    QLineEdit *txt_password_open;
    QPushButton *btn_open;
    QSpacerItem *verticalSpacer;
    QLabel *label_17;
    QWidget *panel_generate;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *txt_name_generate;
    QLineEdit *txt_password_generate;
    QLineEdit *txt_password_generate_confirm;
    QPushButton *btn_generate;
    QWidget *panel_balance;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLabel *txt_balance;
    QLabel *label_3;
    QLabel *txt_balance_unlocked;
    QWidget *panel_close_wallet;
    QVBoxLayout *verticalLayout_17;
    QPushButton *btn_close_wallet;
    QWidget *tab_send;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QFrame *line_2;
    QWidget *sendLonero;
    QFormLayout *formLayout_3;
    QWidget *form_send;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QLineEdit *txt_send_address;
    QLabel *label_5;
    QLineEdit *txt_send_paymentid;
    QLabel *label_9;
    QDoubleSpinBox *txt_send_amount;
    QLabel *label_10;
    QDoubleSpinBox *txt_send_fee;
    QLabel *label_12;
    QSpinBox *txt_send_mixin;
    QPushButton *btn_send;
    QWidget *panel_send_confirm;
    QVBoxLayout *verticalLayout_16;
    QPushButton *btn_send_confirm;
    QPushButton *btn_send_cancel;
    QWidget *tab_receive;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QFrame *line_3;
    QWidget *widget_7;
    QFormLayout *formLayout_6;
    QWidget *in_address;
    QFormLayout *formLayout_5;
    QLabel *label_11;
    QLineEdit *txt_receive_address;
    QWidget *tab_transactions;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QFrame *line_4;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *table_transactions;
    QWidget *tab_contribute;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_13;
    QFrame *line_5;
    QWidget *widget_5;
    QFormLayout *formLayout_8;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_15;
    QLabel *label_14;
    QWidget *widget_2;
    QFormLayout *formLayout_7;
    QLabel *label_18;
    QLineEdit *txt_donate_address_lnr;
    QLabel *label_19;
    QLineEdit *txt_donate_address_btc;
    QMenuBar *bar_menu;
    QStatusBar *bar_status;

    void setupUi(QMainWindow *LoneroWallet)
    {
        if (LoneroWallet->objectName().isEmpty())
            LoneroWallet->setObjectName(QStringLiteral("LoneroWallet"));
        LoneroWallet->resize(700, 481);
        LoneroWallet->setMinimumSize(QSize(700, 400));
        LoneroWallet->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(LoneroWallet);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        panel_main = new QWidget(centralWidget);
        panel_main->setObjectName(QStringLiteral("panel_main"));
        verticalLayout_3 = new QVBoxLayout(panel_main);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 0);
        tabs_wallet = new QTabWidget(panel_main);
        tabs_wallet->setObjectName(QStringLiteral("tabs_wallet"));
        QFont font;
        font.setUnderline(false);
        tabs_wallet->setFont(font);
        tabs_wallet->setCursor(QCursor(Qt::ArrowCursor));
        tabs_wallet->setMouseTracking(false);
        tabs_wallet->setAutoFillBackground(false);
        tabs_wallet->setStyleSheet(QStringLiteral(""));
        tabs_wallet->setTabShape(QTabWidget::Rounded);
        tabs_wallet->setElideMode(Qt::ElideNone);
        tabs_wallet->setUsesScrollButtons(true);
        tabs_wallet->setDocumentMode(false);
        tabs_wallet->setTabsClosable(false);
        tabs_wallet->setMovable(true);
        tab_overview = new QWidget();
        tab_overview->setObjectName(QStringLiteral("tab_overview"));
        tab_overview->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(tab_overview);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        widget_3 = new QWidget(tab_overview);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 40));
        verticalLayout_4 = new QVBoxLayout(widget_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(18, -1, -1, -1);
        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout_4->addWidget(label);


        verticalLayout->addWidget(widget_3);

        line = new QFrame(tab_overview);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        panel_overview = new QWidget(tab_overview);
        panel_overview->setObjectName(QStringLiteral("panel_overview"));
        formLayout = new QFormLayout(panel_overview);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(18, -1, -1, -1);
        panel_password = new QWidget(panel_overview);
        panel_password->setObjectName(QStringLiteral("panel_password"));
        panel_password->setMinimumSize(QSize(15, 15));
        verticalLayout_14 = new QVBoxLayout(panel_password);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_16 = new QLabel(panel_password);
        label_16->setObjectName(QStringLiteral("label_16"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_16->setFont(font2);

        verticalLayout_14->addWidget(label_16);

        select_wallet = new QComboBox(panel_password);
        select_wallet->setObjectName(QStringLiteral("select_wallet"));
        select_wallet->setMinimumSize(QSize(150, 0));
        select_wallet->setEditable(false);

        verticalLayout_14->addWidget(select_wallet);

        txt_password_open = new QLineEdit(panel_password);
        txt_password_open->setObjectName(QStringLiteral("txt_password_open"));
        txt_password_open->setEnabled(true);
        txt_password_open->setEchoMode(QLineEdit::Password);

        verticalLayout_14->addWidget(txt_password_open);

        btn_open = new QPushButton(panel_password);
        btn_open->setObjectName(QStringLiteral("btn_open"));

        verticalLayout_14->addWidget(btn_open);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer);

        label_17 = new QLabel(panel_password);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font2);

        verticalLayout_14->addWidget(label_17);

        panel_generate = new QWidget(panel_password);
        panel_generate->setObjectName(QStringLiteral("panel_generate"));
        verticalLayout_15 = new QVBoxLayout(panel_generate);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        txt_name_generate = new QLineEdit(panel_generate);
        txt_name_generate->setObjectName(QStringLiteral("txt_name_generate"));

        verticalLayout_15->addWidget(txt_name_generate);

        txt_password_generate = new QLineEdit(panel_generate);
        txt_password_generate->setObjectName(QStringLiteral("txt_password_generate"));
        txt_password_generate->setEchoMode(QLineEdit::Password);

        verticalLayout_15->addWidget(txt_password_generate);

        txt_password_generate_confirm = new QLineEdit(panel_generate);
        txt_password_generate_confirm->setObjectName(QStringLiteral("txt_password_generate_confirm"));
        txt_password_generate_confirm->setEchoMode(QLineEdit::Password);

        verticalLayout_15->addWidget(txt_password_generate_confirm);


        verticalLayout_14->addWidget(panel_generate);

        btn_generate = new QPushButton(panel_password);
        btn_generate->setObjectName(QStringLiteral("btn_generate"));

        verticalLayout_14->addWidget(btn_generate);


        formLayout->setWidget(0, QFormLayout::LabelRole, panel_password);

        panel_balance = new QWidget(panel_overview);
        panel_balance->setObjectName(QStringLiteral("panel_balance"));
        panel_balance->setMinimumSize(QSize(10, 10));
        formLayout_2 = new QFormLayout(panel_balance);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(panel_balance);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        label_2->setFont(font3);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        txt_balance = new QLabel(panel_balance);
        txt_balance->setObjectName(QStringLiteral("txt_balance"));
        txt_balance->setFont(font3);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txt_balance);

        label_3 = new QLabel(panel_balance);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font3);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        txt_balance_unlocked = new QLabel(panel_balance);
        txt_balance_unlocked->setObjectName(QStringLiteral("txt_balance_unlocked"));
        txt_balance_unlocked->setFont(font3);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, txt_balance_unlocked);


        formLayout->setWidget(1, QFormLayout::LabelRole, panel_balance);

        panel_close_wallet = new QWidget(panel_overview);
        panel_close_wallet->setObjectName(QStringLiteral("panel_close_wallet"));
        panel_close_wallet->setMinimumSize(QSize(10, 10));
        verticalLayout_17 = new QVBoxLayout(panel_close_wallet);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, -1, 0, 0);
        btn_close_wallet = new QPushButton(panel_close_wallet);
        btn_close_wallet->setObjectName(QStringLiteral("btn_close_wallet"));

        verticalLayout_17->addWidget(btn_close_wallet);


        formLayout->setWidget(2, QFormLayout::LabelRole, panel_close_wallet);


        verticalLayout->addWidget(panel_overview);

        tabs_wallet->addTab(tab_overview, QString());
        tab_send = new QWidget();
        tab_send->setObjectName(QStringLiteral("tab_send"));
        verticalLayout_5 = new QVBoxLayout(tab_send);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, -1, 0, -1);
        widget_4 = new QWidget(tab_send);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMaximumSize(QSize(16777215, 40));
        verticalLayout_8 = new QVBoxLayout(widget_4);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(18, -1, -1, -1);
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        verticalLayout_8->addWidget(label_6);


        verticalLayout_5->addWidget(widget_4);

        line_2 = new QFrame(tab_send);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        sendLonero = new QWidget(tab_send);
        sendLonero->setObjectName(QStringLiteral("sendLonero"));
        formLayout_3 = new QFormLayout(sendLonero);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        form_send = new QWidget(sendLonero);
        form_send->setObjectName(QStringLiteral("form_send"));
        form_send->setMinimumSize(QSize(10, 10));
        formLayout_4 = new QFormLayout(form_send);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_4 = new QLabel(form_send);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        txt_send_address = new QLineEdit(form_send);
        txt_send_address->setObjectName(QStringLiteral("txt_send_address"));
        txt_send_address->setClearButtonEnabled(true);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, txt_send_address);

        label_5 = new QLabel(form_send);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_5);

        txt_send_paymentid = new QLineEdit(form_send);
        txt_send_paymentid->setObjectName(QStringLiteral("txt_send_paymentid"));
        txt_send_paymentid->setClearButtonEnabled(true);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, txt_send_paymentid);

        label_9 = new QLabel(form_send);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_9);

        txt_send_amount = new QDoubleSpinBox(form_send);
        txt_send_amount->setObjectName(QStringLiteral("txt_send_amount"));
        txt_send_amount->setMaximumSize(QSize(150, 16777215));
        txt_send_amount->setWrapping(false);
        txt_send_amount->setFrame(true);
        txt_send_amount->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        txt_send_amount->setAccelerated(true);
        txt_send_amount->setProperty("showGroupSeparator", QVariant(false));
        txt_send_amount->setDecimals(8);
        txt_send_amount->setMinimum(0);
        txt_send_amount->setMaximum(1e+09);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, txt_send_amount);

        label_10 = new QLabel(form_send);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_10);

        txt_send_fee = new QDoubleSpinBox(form_send);
        txt_send_fee->setObjectName(QStringLiteral("txt_send_fee"));
        txt_send_fee->setMaximumSize(QSize(150, 16777215));
        txt_send_fee->setMaximum(100);
        txt_send_fee->setValue(15);

        formLayout_4->setWidget(3, QFormLayout::FieldRole, txt_send_fee);

        label_12 = new QLabel(form_send);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_12);

        txt_send_mixin = new QSpinBox(form_send);
        txt_send_mixin->setObjectName(QStringLiteral("txt_send_mixin"));
        txt_send_mixin->setMaximumSize(QSize(150, 16777215));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, txt_send_mixin);

        btn_send = new QPushButton(form_send);
        btn_send->setObjectName(QStringLiteral("btn_send"));
        btn_send->setMaximumSize(QSize(150, 16777215));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, btn_send);

        panel_send_confirm = new QWidget(form_send);
        panel_send_confirm->setObjectName(QStringLiteral("panel_send_confirm"));
        panel_send_confirm->setMaximumSize(QSize(150, 16777215));
        verticalLayout_16 = new QVBoxLayout(panel_send_confirm);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        btn_send_confirm = new QPushButton(panel_send_confirm);
        btn_send_confirm->setObjectName(QStringLiteral("btn_send_confirm"));
        btn_send_confirm->setMaximumSize(QSize(150, 16777215));
        btn_send_confirm->setCheckable(false);
        btn_send_confirm->setAutoDefault(false);
        btn_send_confirm->setFlat(false);

        verticalLayout_16->addWidget(btn_send_confirm);

        btn_send_cancel = new QPushButton(panel_send_confirm);
        btn_send_cancel->setObjectName(QStringLiteral("btn_send_cancel"));
        btn_send_cancel->setMaximumSize(QSize(150, 16777215));

        verticalLayout_16->addWidget(btn_send_cancel);


        formLayout_4->setWidget(6, QFormLayout::FieldRole, panel_send_confirm);


        formLayout_3->setWidget(0, QFormLayout::SpanningRole, form_send);


        verticalLayout_5->addWidget(sendLonero);

        tabs_wallet->addTab(tab_send, QString());
        tab_receive = new QWidget();
        tab_receive->setObjectName(QStringLiteral("tab_receive"));
        verticalLayout_6 = new QVBoxLayout(tab_receive);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, 0, -1);
        widget_6 = new QWidget(tab_receive);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMaximumSize(QSize(16777215, 40));
        verticalLayout_9 = new QVBoxLayout(widget_6);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(18, -1, -1, -1);
        label_7 = new QLabel(widget_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout_9->addWidget(label_7);


        verticalLayout_6->addWidget(widget_6);

        line_3 = new QFrame(tab_receive);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_3);

        widget_7 = new QWidget(tab_receive);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        formLayout_6 = new QFormLayout(widget_7);
        formLayout_6->setSpacing(6);
        formLayout_6->setContentsMargins(11, 11, 11, 11);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        in_address = new QWidget(widget_7);
        in_address->setObjectName(QStringLiteral("in_address"));
        formLayout_5 = new QFormLayout(in_address);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_11 = new QLabel(in_address);
        label_11->setObjectName(QStringLiteral("label_11"));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_11->setFont(font4);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_11);

        txt_receive_address = new QLineEdit(in_address);
        txt_receive_address->setObjectName(QStringLiteral("txt_receive_address"));
        txt_receive_address->setEnabled(true);
        txt_receive_address->setFocusPolicy(Qt::NoFocus);
        txt_receive_address->setReadOnly(true);
        txt_receive_address->setClearButtonEnabled(false);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, txt_receive_address);


        formLayout_6->setWidget(0, QFormLayout::SpanningRole, in_address);


        verticalLayout_6->addWidget(widget_7);

        tabs_wallet->addTab(tab_receive, QString());
        tab_transactions = new QWidget();
        tab_transactions->setObjectName(QStringLiteral("tab_transactions"));
        verticalLayout_7 = new QVBoxLayout(tab_transactions);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, -1, 0, -1);
        widget_8 = new QWidget(tab_transactions);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setMaximumSize(QSize(16777215, 40));
        verticalLayout_10 = new QVBoxLayout(widget_8);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(18, -1, -1, -1);
        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout_10->addWidget(label_8);


        verticalLayout_7->addWidget(widget_8);

        line_4 = new QFrame(tab_transactions);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_4);

        widget_9 = new QWidget(tab_transactions);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_2 = new QHBoxLayout(widget_9);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        table_transactions = new QTableWidget(widget_9);
        if (table_transactions->columnCount() < 6)
            table_transactions->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_transactions->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_transactions->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_transactions->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_transactions->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_transactions->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_transactions->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        table_transactions->setObjectName(QStringLiteral("table_transactions"));
        table_transactions->setFrameShadow(QFrame::Sunken);
        table_transactions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_transactions->setColumnCount(6);

        horizontalLayout_2->addWidget(table_transactions);


        verticalLayout_7->addWidget(widget_9);

        tabs_wallet->addTab(tab_transactions, QString());
        tab_contribute = new QWidget();
        tab_contribute->setObjectName(QStringLiteral("tab_contribute"));
        verticalLayout_11 = new QVBoxLayout(tab_contribute);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 9, 0, 0);
        widget = new QWidget(tab_contribute);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 40));
        verticalLayout_12 = new QVBoxLayout(widget);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(18, -1, -1, -1);
        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        verticalLayout_12->addWidget(label_13);


        verticalLayout_11->addWidget(widget);

        line_5 = new QFrame(tab_contribute);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line_5);

        widget_5 = new QWidget(tab_contribute);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        formLayout_8 = new QFormLayout(widget_5);
        formLayout_8->setSpacing(6);
        formLayout_8->setContentsMargins(11, 11, 11, 11);
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        formLayout_8->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        widget_10 = new QWidget(widget_5);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMinimumSize(QSize(10, 10));
        verticalLayout_13 = new QVBoxLayout(widget_10);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_15 = new QLabel(widget_10);
        label_15->setObjectName(QStringLiteral("label_15"));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        label_15->setFont(font5);

        verticalLayout_13->addWidget(label_15);

        label_14 = new QLabel(widget_10);
        label_14->setObjectName(QStringLiteral("label_14"));
        QFont font6;
        font6.setPointSize(9);
        label_14->setFont(font6);

        verticalLayout_13->addWidget(label_14);

        widget_2 = new QWidget(widget_10);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        formLayout_7 = new QFormLayout(widget_2);
        formLayout_7->setSpacing(6);
        formLayout_7->setContentsMargins(11, 11, 11, 11);
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(widget_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        QFont font7;
        font7.setBold(true);
        font7.setWeight(75);
        label_18->setFont(font7);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_18);

        txt_donate_address_lnr = new QLineEdit(widget_2);
        txt_donate_address_lnr->setObjectName(QStringLiteral("txt_donate_address_lnr"));
        txt_donate_address_lnr->setFocusPolicy(Qt::NoFocus);
        txt_donate_address_lnr->setEchoMode(QLineEdit::Normal);
        txt_donate_address_lnr->setCursorPosition(0);
        txt_donate_address_lnr->setReadOnly(true);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, txt_donate_address_lnr);

        label_19 = new QLabel(widget_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font7);

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_19);

        txt_donate_address_btc = new QLineEdit(widget_2);
        txt_donate_address_btc->setObjectName(QStringLiteral("txt_donate_address_btc"));
        txt_donate_address_btc->setFocusPolicy(Qt::NoFocus);
        txt_donate_address_btc->setContextMenuPolicy(Qt::DefaultContextMenu);
        txt_donate_address_btc->setAcceptDrops(true);
        txt_donate_address_btc->setAutoFillBackground(false);
        txt_donate_address_btc->setFrame(true);
        txt_donate_address_btc->setCursorPosition(0);
        txt_donate_address_btc->setReadOnly(true);

        formLayout_7->setWidget(1, QFormLayout::FieldRole, txt_donate_address_btc);


        verticalLayout_13->addWidget(widget_2);


        formLayout_8->setWidget(0, QFormLayout::LabelRole, widget_10);


        verticalLayout_11->addWidget(widget_5);

        tabs_wallet->addTab(tab_contribute, QString());

        verticalLayout_3->addWidget(tabs_wallet);


        verticalLayout_2->addWidget(panel_main);

        LoneroWallet->setCentralWidget(centralWidget);
        bar_menu = new QMenuBar(LoneroWallet);
        bar_menu->setObjectName(QStringLiteral("bar_menu"));
        bar_menu->setGeometry(QRect(0, 0, 700, 21));
        LoneroWallet->setMenuBar(bar_menu);
        bar_status = new QStatusBar(LoneroWallet);
        bar_status->setObjectName(QStringLiteral("bar_status"));
        LoneroWallet->setStatusBar(bar_status);
        QWidget::setTabOrder(tabs_wallet, txt_send_address);
        QWidget::setTabOrder(txt_send_address, txt_send_paymentid);
        QWidget::setTabOrder(txt_send_paymentid, txt_send_amount);
        QWidget::setTabOrder(txt_send_amount, txt_send_fee);
        QWidget::setTabOrder(txt_send_fee, txt_send_mixin);
        QWidget::setTabOrder(txt_send_mixin, btn_send);
        QWidget::setTabOrder(btn_send, table_transactions);

        retranslateUi(LoneroWallet);

        tabs_wallet->setCurrentIndex(0);
        btn_send_confirm->setDefault(false);


        QMetaObject::connectSlotsByName(LoneroWallet);
    } // setupUi

    void retranslateUi(QMainWindow *LoneroWallet)
    {
        LoneroWallet->setWindowTitle(QApplication::translate("LoneroWallet", "Lonero Wallet GUI v1.1.1", 0));
        label->setText(QApplication::translate("LoneroWallet", "Wallet Overview", 0));
        label_16->setText(QApplication::translate("LoneroWallet", "Open Wallet", 0));
        select_wallet->setCurrentText(QString());
        txt_password_open->setPlaceholderText(QApplication::translate("LoneroWallet", "Password", 0));
        btn_open->setText(QApplication::translate("LoneroWallet", "Open wallet", 0));
        label_17->setText(QApplication::translate("LoneroWallet", "New Wallet", 0));
#ifndef QT_NO_TOOLTIP
        txt_name_generate->setToolTip(QApplication::translate("LoneroWallet", "Alphanumeric characters only", 0));
#endif // QT_NO_TOOLTIP
        txt_name_generate->setPlaceholderText(QApplication::translate("LoneroWallet", "Name (example: mywallet)", 0));
        txt_password_generate->setPlaceholderText(QApplication::translate("LoneroWallet", "Password", 0));
        txt_password_generate_confirm->setPlaceholderText(QApplication::translate("LoneroWallet", "Confirm password", 0));
        btn_generate->setText(QApplication::translate("LoneroWallet", "Create wallet", 0));
        label_2->setText(QApplication::translate("LoneroWallet", "Balance:", 0));
        txt_balance->setText(QApplication::translate("LoneroWallet", "0 LNR", 0));
        label_3->setText(QApplication::translate("LoneroWallet", "Unlocked balance:", 0));
        txt_balance_unlocked->setText(QApplication::translate("LoneroWallet", "0 LNR", 0));
        btn_close_wallet->setText(QApplication::translate("LoneroWallet", "Close wallet", 0));
        tabs_wallet->setTabText(tabs_wallet->indexOf(tab_overview), QApplication::translate("LoneroWallet", "Overview", 0));
        label_6->setText(QApplication::translate("LoneroWallet", "Send Lonero", 0));
        label_4->setText(QApplication::translate("LoneroWallet", "Address:", 0));
        label_5->setText(QApplication::translate("LoneroWallet", "Payment ID:", 0));
        label_9->setText(QApplication::translate("LoneroWallet", "Amount:", 0));
        txt_send_amount->setSuffix(QApplication::translate("LoneroWallet", " LNR", 0));
        label_10->setText(QApplication::translate("LoneroWallet", "Fee:", 0));
        txt_send_fee->setSuffix(QApplication::translate("LoneroWallet", " LNR", 0));
        label_12->setText(QApplication::translate("LoneroWallet", "Mixin:", 0));
        btn_send->setText(QApplication::translate("LoneroWallet", "Send Lonero", 0));
        btn_send_confirm->setText(QApplication::translate("LoneroWallet", "Confirm", 0));
        btn_send_cancel->setText(QApplication::translate("LoneroWallet", "Cancel", 0));
        tabs_wallet->setTabText(tabs_wallet->indexOf(tab_send), QApplication::translate("LoneroWallet", "Send Lonero", 0));
        label_7->setText(QApplication::translate("LoneroWallet", "Receive Lonero", 0));
        label_11->setText(QApplication::translate("LoneroWallet", "Address:", 0));
        txt_receive_address->setText(QString());
        tabs_wallet->setTabText(tabs_wallet->indexOf(tab_receive), QApplication::translate("LoneroWallet", "Receive Lonero", 0));
        label_8->setText(QApplication::translate("LoneroWallet", "Transactions", 0));
        QTableWidgetItem *___qtablewidgetitem = table_transactions->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("LoneroWallet", "Date (UTC)", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_transactions->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("LoneroWallet", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_transactions->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("LoneroWallet", "Amount", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_transactions->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("LoneroWallet", "Fee", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_transactions->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("LoneroWallet", "Transaction Hash", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_transactions->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("LoneroWallet", "Address", 0));
        tabs_wallet->setTabText(tabs_wallet->indexOf(tab_transactions), QApplication::translate("LoneroWallet", "Transactions", 0));
        label_13->setText(QApplication::translate("LoneroWallet", "Contribute", 0));
        label_15->setText(QApplication::translate("LoneroWallet", "Want to support the Lonero GUI project?", 0));
        label_14->setText(QApplication::translate("LoneroWallet", "Donations can be sent to the addresses below.  Thank you to all who donate. You are much appreciated!", 0));
        label_18->setText(QApplication::translate("LoneroWallet", "LNR:", 0));
        txt_donate_address_lnr->setText(QApplication::translate("LoneroWallet", "D5cagVsvuSwXaLsgtoByc87H6kPXtMzkb6HFWAYVCsNnW1Az5XsEAcxbE1HgdoiSZSD4HdAAWUK7NC3y9MbwPMq5G3kibCF", 0));
        label_19->setText(QApplication::translate("LoneroWallet", "BTC:", 0));
        txt_donate_address_btc->setText(QApplication::translate("LoneroWallet", "39MUeews44uMCNqwG5kbxFzQmpfz1otPTu", 0));
        tabs_wallet->setTabText(tabs_wallet->indexOf(tab_contribute), QApplication::translate("LoneroWallet", "Contribute", 0));
    } // retranslateUi

};

namespace Ui {
    class LoneroWallet: public Ui_LoneroWallet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHCOINWALLET_H
