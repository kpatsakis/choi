void fun()
{
  int entity_3 = 51;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[46-1]='';
  memset(entity_8, 't', entity_3-1);
  entity_8[entity_3-1]='';
  entity_3 = 86;
  strcpy(entity_9, entity_8);
}