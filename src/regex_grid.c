char_u grid_n[][16] = {
    /* ascii escapes */
    "a\\e","a\\t","a\\r","a\\b","a\\n","a\\\\",
    /* backrefs */
    "b\\1","b\\2","b\\3","b\\4","b\\5","b\\6","b\\7","b\\8","b\\9",
    /* sensitivity & similar */
    "s\\c","s\\C","s\\m","s\\M","s\\v","s\\V","s\\Z",
    /* numeric repitition */
    "n\\{",   /* ends with \{ or }" */
    /* multi */
    "m*","m\\+","m\\=","m\\?",
    /* look-around */
    "l\\@>","l\\@=","l\\@!","l\\@<=","l\\@<!",
    /* regex typical */
    "r\\(","r\\%(","r\\)","r.","r\\_.","r~",
    "r\\_^","r\\_$","r\\<","r\\>","r\\zs","r\\ze",
    /* weird Vim stuff */
    "w\\%^","w\\%$","w\\%V","w\\%#","w\\%'m","w\\%<'m","w\\%>'m",
    /* partial matching   e.g. fun\%[ction] */
    "p\\%[",
    /* brackets */
    "[\\_[^]","[\\_[^","[\\_[]","[\\_[",
       "[[^]",   "[[^",   "[[]",   "[[",
    /* unicode, etc */
    "u\\%d","u\\%o","u\\%x","u\\%u","u\\%U",
    /* end of pattern */
    "//",
    /* char classes */
    "c\\i","c\\I","c\\k","c\\K","c\\f","c\\F","c\\p","c\\P","c\\s","c\\S",
    "c\\d","c\\D","c\\x","c\\X","c\\o","c\\O","c\\w","c\\W","c\\h","c\\H",
    "c\\a","c\\A","c\\l","c\\L","c\\u","c\\U",
    /* SKIPPED:   ^ $ \%23l \%23v \%23c   */
    ""
};

char_u grid_b[][16] = {
    /* escapables */
    "e\\b","e\\d","e\\e","e\\r","e\\t","e\\n","e\\o","e\\U","e\\u","e\\x",
    "e\\\\",
    /* character class groups */
    "g[:alnum:]","g[:alpha:]","g[:blank:]","g[:cntrl:]","g[:digit:]",
    "g[:graph:]","g[:lower:]","g[:print:]","g[:punct:]","g[:space:]",
    "g[:upper:]","g[:xdigit:]","g[:return:]","g[:tab:]","g[:escape:]",
    "g[:backspace:]",
    /* end of collection */
    "]]",
    /* SKIPPED: equivalence classes: [=a=] and collation elements: [.a.] */
    /* SKIPPED: \^ \] \- (these look fine by default) */
    ""
};

char_u grid_s[][16] = {
    /* offsets */
    "o+","o-","oe","os","ob",
    /* another search */
    ";;",
    /* SKIPPED: offset numbers */
    ""
};
