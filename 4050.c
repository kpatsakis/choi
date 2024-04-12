void fun()
{
  int entity_9 = 23;
  char entity_2[77] = "";
  entity_2 = NULL;
  char entity_8[76] = "";
  entity_8 = NULL;
  memset(entity_2, 'u', 77-1);
  entity_2[77-1]='';
  memset(entity_8, 'd', 76-1);
  entity_8[76-1]='';
  entity_8[entity_9] = 'A';
}