void fun()
{
  int entity_3 = 94;
  char entity_4[69] = "";
  entity_4 = NULL;
  char entity_9[28] = "";
  entity_9 = NULL;
  char* entity_1;
  char entity_5[46] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_4, 'w', 69-1);
  entity_4[69-1]='';
  memset(entity_9, 'g', 28-1);
  entity_9[28-1]='';
  memset(entity_5, 'Y', 46-1);
  entity_5[46-1]='';
  strcpy(entity_1, entity_9);
}