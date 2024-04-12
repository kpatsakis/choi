void fun()
{
  int entity_8 = 13;
  char entity_6[22] = "";
  entity_6 = NULL;
  memset(entity_6, 'b', 22-1);
  entity_6[22-1]='';
  entity_8 = 54;
  entity_6[entity_8] = 'L';
}