void fun()
{
  int entity_0 = 79;
  entity_0 = 79;
  char entity_2 = 'P';
  char entity_4[22] = "";
  entity_4 = NULL;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'D', entity_0-1);
  entity_7[entity_0-1]='';
  memset(entity_4, 'J', 22-1);
  entity_4[22-1]='';
  entity_9 = (char*)malloc(65*sizeof(char));
  entity_9[65-1]='';
  strcpy(entity_9, entity_7);
}