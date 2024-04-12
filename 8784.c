void fun()
{
  int entity_4 = 18;
  char entity_6[12] = "";
  entity_6 = NULL;
  memset(entity_6, 'Q', 12-1);
  entity_6[12-1]='';
  entity_6[entity_4] = 'L';
}