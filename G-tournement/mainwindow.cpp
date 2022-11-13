#include "mainwindow.h"

/**
 * @brief MainWindow::MainWindow Constructeur
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowTitle(tr("Goult tournement"));

    // Database
    this->m_dbhandler = new DataBaseHandler;

    // Main wiget
    this->m_centralWidget = new QWidget();
    this->m_MainLayout = new QGridLayout();
    this->setCentralWidget(this->m_centralWidget);
    this->m_centralWidget->setLayout(this->m_MainLayout);
    this->setMinimumWidth(250);
    this->setMinimumHeight(60);

    this->UISelectGame();
}

/**
 * @brief MainWindow::UISelectFormat Genere l'interface de selection du format pour le tournoi
 */
void MainWindow::UISelectFormat(void)
{
    QLabel *tourmnementChoice_lbl = new QLabel("Format du tournoi?");
    this->m_MainLayout->addWidget(tourmnementChoice_lbl, 0, 0, 1, 2);

    this->m_modeList = new QComboBox();
    this->m_modeList->addItem("Simple élimination");
    this->m_modeList->addItem("Double élimination");
    this->m_modeList->addItem("Ladderboard");
    this->m_MainLayout->addWidget(this->m_modeList, 1, 0, 1, 2);

    this->m_previous = new QPushButton("Precedent");
    // Todo le connect
    this->m_MainLayout->addWidget(this->m_previous, 2, 0);

    this->m_next     = new QPushButton("Suivant");
    // Todo le connect
    this->m_MainLayout->addWidget(this->m_next, 2, 1);
}

/**
 * @brief MainWindow::UISelectFormat Genere l'interface de selection du jeu pour le tournoi
 */
void MainWindow::UISelectGame(void)
{
    QLabel *tourmnementChoice_lbl = new QLabel("Quel est le jeu?");
    this->m_MainLayout->addWidget(tourmnementChoice_lbl, 0, 0, 1, 2);

    // Selection du jeux (possible d'en ajouter un manuellement
    // TODO à partir du liste
    this->m_gameList = new QComboBox();
    this->m_gameList->setEditable(true);
    this->m_gameList->addItem("Mario kart Delux");
    this->m_gameList->addItem("Call of duty");
    this->m_gameList->addItem("PacMan");
    this->m_MainLayout->addWidget(this->m_gameList, 1, 0, 1, 2);

    this->m_previous = new QPushButton("Precedent");
    // Todo le connect
    this->m_MainLayout->addWidget(this->m_previous, 2, 0);

    this->m_next     = new QPushButton("Suivant");
    // Todo le connect
    this->m_MainLayout->addWidget(this->m_next, 2, 1);
}

/**
 * @brief MainWindow::~MainWindow Destructeur
 */
MainWindow::~MainWindow()
{
}

