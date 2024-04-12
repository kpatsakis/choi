void fun()
{
  int entity_1 = 94;
  int entity_2 = 93;
  entity_1 = 94;
  char entity_9[entity_1] = "";
  char entity_0[4] = "";
  char* entity_8;
  char* entity_4;
  memset(entity_0, 'b', 4-1);
  entity_0[4-1]='0';
  entity_4 = (char*)malloc(32*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'Q', entity_1-1);
  entity_9[entity_1-1]='0';
  entity_8 = (char*)malloc(61*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_4, entity_9);
}