void fun()
{
  int entity_5 = 78;
  char entity_9[31] = "";
  entity_9 = NULL;
  char* entity_2;
  char* entity_1;
  char* entity_4;
  char entity_7[95] = "";
  entity_7 = NULL;
  memset(entity_7, 'K', 95-1);
  entity_7[95-1]='';
  memset(entity_9, 'H', 31-1);
  entity_9[31-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[4-1]='';
  strcpy(entity_4, entity_7);
}