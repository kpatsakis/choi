void fun()
{
  int entity_7 = 86;
  entity_7 = 60;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'e', entity_7-1);
  entity_5[entity_7-1]='';
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[46-1]='';
  memcpy(entity_9, entity_5, entity_7*sizeof(char));
}