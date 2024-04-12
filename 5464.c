void fun()
{
  int entity_8 = 6;
  char entity_3 = 'I';
  char entity_5[14] = "";
  entity_5 = NULL;
  memset(entity_5, 'e', 14-1);
  entity_5[14-1]='';
  entity_5[entity_8] = 'L';
}