#include <QtWidgets>

class ServerApp : public QMainWindow
{
    Q_OBJECT

public:
    ServerApp(QWidget* parent = nullptr)
        : QMainWindow(parent)
    {
        setWindowTitle("��������� ����������");

        QTextEdit* messagesTextEdit = new QTextEdit;
        QListWidget* usersListWidget = new QListWidget;
        QPushButton* disconnectButton = new QPushButton("��������� ������������");
        QPushButton* banButton = new QPushButton("�������� ������������");

        QVBoxLayout* mainLayout = new QVBoxLayout;
        mainLayout->addWidget(messagesTextEdit);

        QHBoxLayout* usersActionsLayout = new QHBoxLayout;
        usersActionsLayout->addWidget(usersListWidget);
        usersActionsLayout->addWidget(disconnectButton);
        usersActionsLayout->addWidget(banButton);

        mainLayout->addLayout(usersActionsLayout);

        QWidget* centralWidget = new QWidget;
        centralWidget->setLayout(mainLayout);
        setCentralWidget(centralWidget);
    }

private slots:
    void disconnectUser()
    {
    }

    void banUser()
    {
    }
};

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    ServerApp serverApp;
    serverApp.show();

    return app.exec();
}

#include "main.moc"