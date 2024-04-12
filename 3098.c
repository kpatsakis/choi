void fun()
{
  int entity_3 = 60;
  int entity_2 = 53;
  entity_2 = 77;
  char entity_9[22] = "";
  entity_9 = NULL;
  char entity_1[81] = "";
  entity_1 = NULL;
  memset(entity_1, 'P', 81-1);
  entity_1[81-1]='';
  memset(entity_9, 'L', 22-1);
  entity_9[22-1]='';
  entity_1[entity_2] = 'L';
}