# include "config.hh"

Base::Config::Config ( void )  
{
   mConfigValues[ "SystemUrl" ] = "https://www.google.com.mx";
}

Base::Config::~Config ( void ) 
{
}

QString& Base::Config::get ( QString key )
{
   Base::Config* myself = instance ();
   
   return ( myself->mConfigValues[ key ] );
}

Base::Config* Base::Config::instance ( void )
{
   static Base::Config myself;
   
   return ( &myself );
}