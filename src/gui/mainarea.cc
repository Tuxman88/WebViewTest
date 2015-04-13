# include "mainarea.hh" 

Gui::MainArea::MainArea ( void )
   : QWebView ()
{
   connect ( this , SIGNAL ( loadFinished ( bool ) ) ,
             this , SLOT ( checkLoadFinished ( bool ) ) );
   
   connect ( this , SIGNAL ( linkClicked ( const QUrl& ) ) , 
             this , SLOT ( checkLinkClicked ( const QUrl& ) ) );
   
   connect ( this , SIGNAL ( loadProgress ( int ) ) ,
             this , SLOT ( checkLoadProgress ( int ) ) );
   
   connect ( this , SIGNAL ( loadStarted () ) ,
             this , SLOT ( checkLoadStarted () ) );
   
   connect ( this , SIGNAL ( selectionChanged () ) , 
             this , SLOT ( checkSelectionChanged () ) );
   
   connect ( this , SIGNAL ( statusBarMessage ( const QString& ) ) ,
             this , SLOT ( checkStatusBarMessage ( const QString& ) ) );
   
   connect ( this , SIGNAL ( titleChanged ( const QString& ) ) ,
             this , SLOT ( checkTitleChanged ( const QString& ) ) );
   
   connect ( this , SIGNAL ( urlChanged ( const QUrl& ) ) ,
             this , SLOT ( checkUrlChanged ( const QUrl& ) ) );
   
   buildGui ();
}

Gui::MainArea::~MainArea ( void )
{
}

void Gui::MainArea::buildGui ( void )
{
   load ( QUrl ( Base::Config::get ( "SystemUrl" ) ) );
   
   return;
}

void Gui::MainArea::checkLinkClicked ( const QUrl& url )
{
   qDebug () << "LinkClicked: " << url;
   
   return;
}

void Gui::MainArea::checkLoadFinished ( bool load_correctly )
{
   qDebug () << "LoadFinished: " << load_correctly;
   
   return;
}

void Gui::MainArea::checkLoadProgress ( int current_progress )
{
   qDebug () << "LoadProgress: " << current_progress;
   
   return;
}

void Gui::MainArea::checkLoadStarted ( void )
{
   qDebug () << "LoadStarted";
   
   return;
}

void Gui::MainArea::checkSelectionChanged ( void )
{
   qDebug () << "SelectionChanged";
   
   return;
}

void Gui::MainArea::checkStatusBarMessage ( const QString& status_message )
{
   qDebug () << "StatusBarMessage: " << status_message;
   
   return;
}

void Gui::MainArea::checkTitleChanged ( const QString& window_title )
{
   qDebug () << "TitleChanged: " << window_title;
   
   return;
}

void Gui::MainArea::checkUrlChanged ( const QUrl& url )
{
   qDebug () << "UrlChanged: " << url;
   
   return;
}