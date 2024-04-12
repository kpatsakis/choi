void fun()
{
  int entity_5 = 41;
  entity_5 = 86;
  char entity_2[94] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  memset(entity_2, 'p', 94-1);
  entity_2[94-1]='';
  entity_7 = (char*)malloc(46*sizeof(char));
  entity_7[46-1]='';
  memset(entity_3, 'Z', entity_5-1);
  entity_3[entity_5-1]='';
  memcpy(entity_7, entity_3, entity_5*sizeof(char));
}