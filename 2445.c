void fun()
{
  int entity_5 = 37;
  char* entity_7;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char entity_3 = 'Q';
  memset(entity_6, 'D', entity_5-1);
  entity_6[entity_5-1]='';
  entity_7 = (char*)malloc(46*sizeof(char));
  entity_7[46-1]='';
  strcpy(entity_7, entity_6);
}