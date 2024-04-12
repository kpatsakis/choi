void fun()
{
  int entity_3 = 67;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  memset(entity_8, 'H', entity_3-1);
  entity_8[entity_3-1]='';
  entity_8[88] = 'K';
}