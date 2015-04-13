# include "mainwindow.hh"

Gui::MainWindow::MainWindow ( void )
   : QMainWindow ()
{
   buildGui ();
}

Gui::MainWindow::~MainWindow ( void )
{
}

void Gui::MainWindow::buildGui ( void )
{
   mMainArea = new Gui::MainArea ();
   
   setCentralWidget ( mMainArea );
   
   return;
}