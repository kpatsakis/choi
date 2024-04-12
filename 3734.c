void fun()
{
  int entity_3 = 25;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'c', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[100] = 'L';
}