void fun()
{
  int entity_5 = 51;
  char entity_2[95] = "";
  entity_2 = NULL;
  memset(entity_2, 'P', 95-1);
  entity_2[95-1]='';
  entity_2[entity_5] = 'L';
}