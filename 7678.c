void fun()
{
  int entity_8 = 54;
  entity_8 = 97;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'R', entity_8-1);
  entity_1[entity_8-1]='';
  entity_1[60] = 'L';
}