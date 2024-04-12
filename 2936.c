void fun()
{
  int entity_3 = 5;
  char entity_6[69] = "";
  entity_6 = NULL;
  char entity_4[32] = "";
  entity_4 = NULL;
  memset(entity_4, 'V', 32-1);
  entity_4[32-1]='';
  memset(entity_6, 'H', 69-1);
  entity_6[69-1]='';
  entity_3 = 34;
  entity_6[entity_3] = 'L';
}