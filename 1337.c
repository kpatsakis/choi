void fun()
{
  int entity_8 = 60;
  entity_8 = 34;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_4, 'b', entity_8-1);
  entity_4[entity_8-1]='';
  entity_4[32] = 'L';
}