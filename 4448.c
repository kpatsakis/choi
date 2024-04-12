void fun()
{
  int entity_1 = 30;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'T', entity_1-1);
  entity_7[entity_1-1]='';
  entity_7[81] = 'L';
}