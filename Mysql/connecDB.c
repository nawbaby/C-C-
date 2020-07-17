    #include <stdio.h>
    #include <mysql.h>
     
    int main(int argc, const char *argv[])
    {
        MYSQL   mysql;
     
        if (NULL == mysql_init(&mysql)) {    //分配和初始化MYSQL对象
            printf("mysql_init(): %s\n", mysql_error(&mysql));
            return -1;
        }
     
        //尝试与运行在主机上的MySQL数据库引擎建立连接
        if (NULL == mysql_real_connect(&mysql,
                    "localhost",
                    "gyp",
                    "88888888@Abc",
                    "sys",
                    0,
                    NULL,
                    0)) {
            printf("mysql_real_connect(): %s\n", mysql_error(&mysql));
            return -1;
        }
     
        printf("Connected MySQL successful! \n");
     
        mysql_close(&mysql);
        return 0;
    }