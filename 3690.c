void fun()
{
  int entity_2 = 64;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char entity_0 = 'd';
  memset(entity_8, 'I', entity_2-1);
  entity_8[entity_2-1]='';
  entity_2 = 16;
  entity_8[5] = 'L';
}