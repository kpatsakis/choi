void fun()
{
  int entity_9 = 53;
  char entity_1[1] = "";
  entity_1 = NULL;
  char entity_7[44] = "";
  entity_7 = NULL;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[7-1]='';
  memset(entity_7, 'B', 44-1);
  entity_7[44-1]='';
  memset(entity_4, 'x', entity_9-1);
  entity_4[entity_9-1]='';
  memset(entity_1, 'y', 1-1);
  entity_1[1-1]='';
  memcpy(entity_8, entity_4, entity_9*sizeof(char));
}