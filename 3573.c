void fun()
{
  int entity_8 = 26;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(46*sizeof(char));
  entity_7[46-1]='';
  memset(entity_4, 'U', entity_8-1);
  entity_4[entity_8-1]='';
  strcpy(entity_7, entity_4);
}