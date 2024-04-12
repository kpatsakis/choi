void fun()
{
  int entity_2 = 16;
  char* entity_5;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(46*sizeof(char));
  entity_5[46-1]='';
  memset(entity_3, 'P', entity_2-1);
  entity_3[entity_2-1]='';
  memcpy(entity_5, entity_3, entity_2*sizeof(char));
}