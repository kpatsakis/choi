void fun()
{
  int entity_5 = 73;
  char* entity_0;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_4 = 'J';
  char entity_9[71] = "";
  entity_9 = NULL;
  memset(entity_9, 'd', 71-1);
  entity_9[71-1]='';
  entity_7 = (char*)malloc(28*sizeof(char));
  entity_7[28-1]='';
  memset(entity_1, 'B', entity_5-1);
  entity_1[entity_5-1]='';
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  entity_5 = 37;
  strcpy(entity_7, entity_1);
}