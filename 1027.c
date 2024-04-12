void fun()
{
  int entity_6 = 50;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'b', entity_6-1);
  entity_2[entity_6-1]='';
  entity_2[71] = 'L';
}