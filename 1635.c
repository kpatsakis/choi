void fun()
{
  int entity_3 = 24;
  entity_3 = 66;
  char entity_4[12] = "";
  entity_4 = NULL;
  char entity_9[97] = "";
  entity_9 = NULL;
  char entity_1[43] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_9, 'n', 97-1);
  entity_9[97-1]='';
  memset(entity_1, 'a', 43-1);
  entity_1[43-1]='';
  memset(entity_4, 'n', 12-1);
  entity_4[12-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  strcpy(entity_5, entity_4);
}