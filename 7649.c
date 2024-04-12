void fun()
{
  int entity_8 = 94;
  entity_8 = 94;
  char* entity_9;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char entity_5[19] = "";
  entity_5 = NULL;
  char entity_6[69] = "";
  entity_6 = NULL;
  char* entity_1;
  memset(entity_7, 'd', entity_8-1);
  entity_7[entity_8-1]='';
  entity_1 = (char*)malloc(5*sizeof(char));
  entity_1[5-1]='';
  memset(entity_5, 'w', 19-1);
  entity_5[19-1]='';
  entity_9 = (char*)malloc(11*sizeof(char));
  entity_9[11-1]='';
  memset(entity_6, 'x', 69-1);
  entity_6[69-1]='';
  strcpy(entity_1, entity_7);
}