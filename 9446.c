void fun()
{
  int entity_1 = 13;
  entity_1 = 65;
  char* entity_3;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(46*sizeof(char));
  entity_3[46-1]='';
  memset(entity_6, 'Z', entity_1-1);
  entity_6[entity_1-1]='';
  memcpy(entity_3, entity_6, entity_1*sizeof(char));
}