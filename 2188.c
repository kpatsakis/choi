void fun()
{
  int entity_0 = 94;
  entity_0 = 18;
  char entity_2 = 'L';
  char entity_3[15] = "";
  entity_3 = NULL;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_3, 'W', 15-1);
  entity_3[15-1]='';
  memset(entity_6, 'i', entity_0-1);
  entity_6[entity_0-1]='';
  entity_6[88] = 'b';
}