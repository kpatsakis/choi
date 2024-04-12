void fun()
{
  char* entity_0;
  char entity_8[31] = "";
  entity_8 = NULL;
  memset(entity_8, 'r', 31-1);
  entity_8[31-1]='';
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[46-1]='';
  strcpy(entity_0, entity_8);
}