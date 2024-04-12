void fun()
{
  int entity_2 = 88;
  char entity_8[32] = "";
  entity_8 = NULL;
  memset(entity_8, 's', 32-1);
  entity_8[32-1]='';
  entity_8[entity_2] = 'K';
}