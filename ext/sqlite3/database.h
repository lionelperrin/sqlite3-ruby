#ifndef SQLITE3_DATABASE_RUBY
#define SQLITE3_DATABASE_RUBY

#include <sqlite3_ruby.h>

// used by module.c too
void set_sqlite3_func_result(sqlite3_context * ctx, VALUE result);
VALUE sqlite3val2rb(sqlite3_value * val);

struct _sqlite3Ruby {
  sqlite3 *db;
};

typedef struct _sqlite3Ruby sqlite3Ruby;
typedef sqlite3Ruby * sqlite3RubyPtr;

void init_sqlite3_database();

#endif
