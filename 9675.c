void fun()
{
  int entity_9 = 12;
  char entity_4[21] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_4, 'H', 21-1);
  entity_4[21-1]='';
  memset(entity_1, 'W', entity_9-1);
  entity_1[entity_9-1]='';
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  memcpy(entity_7, entity_1, entity_9*sizeof(char));
}