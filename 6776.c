void fun()
{
  int entity_1 = 37;
  char entity_4[32] = "";
  entity_4 = NULL;
  memset(entity_4, 'f', 32-1);
  entity_4[32-1]='';
  entity_4[entity_1] = 'L';
}