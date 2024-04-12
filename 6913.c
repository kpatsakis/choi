void fun()
{
  int entity_1 = 27;
  char* entity_5;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  entity_5 = (char*)malloc(46*sizeof(char));
  entity_5[46-1]='';
  memset(entity_7, 'L', entity_1-1);
  entity_7[entity_1-1]='';
  memcpy(entity_5, entity_7, entity_1*sizeof(char));
}