void fun()
{
  int entity_4 = 72;
  char entity_7[97] = "";
  entity_7 = NULL;
  memset(entity_7, 'T', 97-1);
  entity_7[97-1]='';
  entity_7[entity_4] = 'b';
}