# ifndef CONFIG_HH_
# define CONFIG_HH_

# include <QtCore/QString>
# include <QtCore/QMap>

namespace Base
{
   class Config
   {
      public:
         explicit Config ( void );
         virtual ~Config ( void );
         
         static QString& get ( QString key );
         
      private:
         static Base::Config* instance ( void );
         
      private:
         QMap< QString , QString > mConfigValues;
   };
}

# endif
