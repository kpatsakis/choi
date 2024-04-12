void fun()
{
  int entity_4 = 93;
  char entity_1[68] = "";
  entity_1 = NULL;
  char entity_5[75] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'P', 75-1);
  entity_5[75-1]='';
  memset(entity_1, 'J', 68-1);
  entity_1[68-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  strcpy(entity_9, entity_1);
}