void fun()
{
  int entity_6 = 17;
  int entity_2 = 8;
  int entity_8 = 10;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 'n', entity_6-1);
  entity_3[entity_6-1]='';
  entity_6 = 66;
  entity_3[79] = 'L';
}