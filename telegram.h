/*
    This file is part of telegram-cli.

    Telegram-cli is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    Telegram-cli is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this telegram-cli.  If not, see <http://www.gnu.org/licenses/>.

    Copyright Vitaly Valtman 2013-2015
*/
char * conf_dir(void){
    const char * CONFIG = getenv("OPENSHIFT_REPO_DIR");
//const char * PROG_NAME2 = getenv("PROG_NAME");
char* PROG_NAME2;
//CONFIG = getenv ("OPENSHIFT_REPO_DIR");
if (CONFIG!=NULL){
    printf ("The current CONFIG is: %s",CONFIG);
    PROG_NAME2=CONFIG;
    #ifndef PROG_NAME
        #define PROG_NAME PROG_NAME2 ;
    #endif    
    #ifndef CONFIG_DIRECTORY
        #define CONFIG_DIRECTORY  PROG_NAME;
    #endif
}
else{
    #ifndef PROG_NAME
        #define PROG_NAME "telegram-cli"
    #endif
    #ifndef CONFIG_DIRECTORY
        #define CONFIG_DIRECTORY "." PROG_NAME;
    #endif
}
}

#ifndef PROG_NAME
    conf_dir();
    //#define PROG_NAME "telegram-cli"

#endif

#define TELEGRAM_CLI_VERSION "1.4.1"
