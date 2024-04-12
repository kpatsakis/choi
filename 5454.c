void fun()
{
  int entity_6 = 55;
  entity_6 = 89;
  char* entity_8;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  memset(entity_5, 'w', entity_6-1);
  entity_5[entity_6-1]='';
  entity_8 = (char*)malloc(46*sizeof(char));
  entity_8[46-1]='';
  memcpy(entity_8, entity_5, entity_6*sizeof(char));
}