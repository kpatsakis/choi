void fun()
{
  int entity_4 = 77;
  int entity_1 = 11;
  char entity_9[5] = "";
  entity_9 = NULL;
  char entity_2 = 'L';
  memset(entity_9, 'f', 5-1);
  entity_9[5-1]='';
  entity_9[entity_1] = 'P';
}