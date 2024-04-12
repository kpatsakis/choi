void fun()
{
  int entity_5 = 23;
  char entity_8[99] = "";
  entity_8 = NULL;
  memset(entity_8, 'T', 99-1);
  entity_8[99-1]='';
  entity_8[entity_5] = 'n';
}