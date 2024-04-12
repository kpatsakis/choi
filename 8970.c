void fun()
{
  int entity_6 = 45;
  entity_6 = 23;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 's', entity_6-1);
  entity_2[entity_6-1]='';
  entity_2[61] = 'L';
}