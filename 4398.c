void fun()
{
  int entity_5 = 17;
  char entity_8[64] = "";
  entity_8 = NULL;
  memset(entity_8, 'p', 64-1);
  entity_8[64-1]='';
  entity_8[entity_5] = 'T';
}