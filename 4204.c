void fun()
{
  int entity_3 = 7;
  char entity_0[76] = "";
  entity_0 = NULL;
  char entity_4 = 'q';
  char entity_9[18] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_8[17] = "";
  entity_8 = NULL;
  memset(entity_8, 'T', 17-1);
  entity_8[17-1]='';
  memset(entity_0, 'c', 76-1);
  entity_0[76-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_9, 'x', 18-1);
  entity_9[18-1]='';
  memcpy(entity_5, entity_0, 76*sizeof(char));
}