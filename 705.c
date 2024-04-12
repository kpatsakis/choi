void fun()
{
  int entity_3 = 77;
  entity_3 = 54;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char entity_6[33] = "";
  entity_6 = NULL;
  memset(entity_6, 'K', 33-1);
  entity_6[33-1]='';
  memset(entity_1, 'j', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[8] = 'L';
}