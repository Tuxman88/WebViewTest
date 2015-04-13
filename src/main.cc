# include <QtWidgets/QApplication>

# include "gui/mainwindow.hh"

int main ( int argc , char** argv )
{
   QApplication application ( argc , argv );
   
   Gui::MainWindow* main_window;
   main_window = new Gui::MainWindow ();
   
   main_window->show ();
   
   application.exec ();
   
   delete main_window;
   
   return ( 0 );
}