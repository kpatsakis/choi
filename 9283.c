void fun()
{
  int entity_1 = 38;
  char entity_3[10] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_6[91] = "";
  entity_6 = NULL;
  memset(entity_3, 'k', 10-1);
  entity_3[10-1]='';
  memset(entity_6, 'P', 91-1);
  entity_6[91-1]='';
  entity_8 = (char*)malloc(46*sizeof(char));
  entity_8[46-1]='';
  strcpy(entity_8, entity_3);
}