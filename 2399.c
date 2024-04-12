void fun()
{
  int entity_3 = 26;
  int entity_9 = 15;
  entity_3 = 54;
  char entity_1[13] = "";
  entity_1 = NULL;
  char entity_5[28] = "";
  entity_5 = NULL;
  char* entity_4;
  char entity_6[78] = "";
  entity_6 = NULL;
  memset(entity_5, 'p', 28-1);
  entity_5[28-1]='';
  memset(entity_1, 'N', 13-1);
  entity_1[13-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_6, 'M', 78-1);
  entity_6[78-1]='';
  strcpy(entity_4, entity_1);
}