void fun()
{
  int entity_5 = 47;
  char entity_3[23] = "";
  entity_3 = NULL;
  memset(entity_3, 'j', 23-1);
  entity_3[23-1]='';
  entity_3[entity_5] = 'L';
}