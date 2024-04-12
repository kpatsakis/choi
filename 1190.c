void fun()
{
  int entity_8 = 80;
  int entity_3 = 66;
  entity_3 = 16;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'C', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[6] = 'L';
}