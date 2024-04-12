void fun()
{
  int entity_2 = 83;
  int entity_5 = 88;
  char* entity_4;
  char entity_8[20] = "";
  entity_8 = NULL;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(46*sizeof(char));
  entity_4[46-1]='';
  memset(entity_8, 'v', 20-1);
  entity_8[20-1]='';
  memset(entity_1, 't', entity_5-1);
  entity_1[entity_5-1]='';
  memcpy(entity_4, entity_1, entity_5*sizeof(char));
}