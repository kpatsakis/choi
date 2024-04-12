void fun()
{
  int entity_3 = 5;
  int entity_2 = 61;
  char entity_1 = 't';
  char* entity_9;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char entity_8[81] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[20-1]='';
  memset(entity_8, 'B', 81-1);
  entity_8[81-1]='';
  memset(entity_4, 'O', entity_3-1);
  entity_4[entity_3-1]='';
  entity_3 = 92;
  memcpy(entity_9, entity_4, entity_3*sizeof(char));
}