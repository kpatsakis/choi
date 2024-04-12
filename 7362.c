void fun()
{
  int entity_9 = 92;
  char* entity_1;
  char entity_7[55] = "";
  entity_7 = NULL;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[40-1]='';
  memset(entity_7, 'a', 55-1);
  entity_7[55-1]='';
  memset(entity_6, 'e', entity_9-1);
  entity_6[entity_9-1]='';
  entity_9 = 22;
  memcpy(entity_1, entity_6, entity_9*sizeof(char));
}