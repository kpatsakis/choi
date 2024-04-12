void fun()
{
  int entity_9 = 32;
  char* entity_8;
  char entity_1[25] = "";
  entity_1 = NULL;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'O', entity_9-1);
  entity_4[entity_9-1]='';
  memset(entity_1, 'n', 25-1);
  entity_1[25-1]='';
  entity_8 = (char*)malloc(61*sizeof(char));
  entity_8[61-1]='';
  memcpy(entity_8, entity_4, entity_9*sizeof(char));
}