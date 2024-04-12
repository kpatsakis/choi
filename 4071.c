void fun()
{
  int entity_5 = 22;
  char* entity_1;
  char* entity_9;
  char entity_2[39] = "";
  entity_2 = NULL;
  char entity_7[3] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_7, 'A', 3-1);
  entity_7[3-1]='';
  memset(entity_2, 'y', 39-1);
  entity_2[39-1]='';
  strcpy(entity_1, entity_7);
}