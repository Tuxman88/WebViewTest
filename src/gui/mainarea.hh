# ifndef MAINAREA_HH_
# define MAINAREA_HH_

# include <QtCore/QDebug>
# include <QtCore/QString>
# include <QtCore/QUrl>
# include <QtWebKitWidgets/QWebView>

# include "../base/config.hh"

namespace Gui
{
   class MainArea : public QWebView
   {
      Q_OBJECT
      
      public:
         explicit MainArea ( void );
         virtual ~MainArea ( void );
         
      private slots:
         void checkLinkClicked ( const QUrl& url );
         void checkLoadFinished ( bool load_correctly );
         void checkLoadProgress ( int current_progress );
         void checkLoadStarted ( void );
         void checkSelectionChanged ( void );
         void checkStatusBarMessage ( const QString& status_message );
         void checkTitleChanged ( const QString& window_title );
         void checkUrlChanged ( const QUrl& url );
         
      private:
         void buildGui ( void );
   };
}

# endif
