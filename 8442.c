void fun()
{
  int entity_2 = 71;
  int entity_9 = 54;
  entity_2 = 71;
  char entity_5[63] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_6, 'V', entity_2-1);
  entity_6[entity_2-1]='';
  memset(entity_5, 'Z', 63-1);
  entity_5[63-1]='';
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[46-1]='';
  strcpy(entity_0, entity_6);
}