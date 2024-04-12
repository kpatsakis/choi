void fun()
{
  int entity_5 = 62;
  int entity_7 = 43;
  char entity_9[37] = "";
  entity_9 = NULL;
  memset(entity_9, 'o', 37-1);
  entity_9[37-1]='';
  entity_9[entity_7] = 'L';
}