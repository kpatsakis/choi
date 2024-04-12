void fun()
{
  int entity_7 = 75;
  int entity_9 = 78;
  entity_9 = 42;
  char entity_1[entity_9] = "";
  char* entity_6;
  char entity_3[39] = "";
  memset(entity_3, 'o', 39-1);
  entity_3[39-1]='0';
  entity_6 = (char*)malloc(17*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'c', entity_9-1);
  entity_1[entity_9-1]='0';
  memcpy(entity_6, entity_1, entity_9*sizeof(char));
}