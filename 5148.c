void fun()
{
  int entity_6 = 80;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  memset(entity_8, 'K', entity_6-1);
  entity_8[entity_6-1]='';
  entity_8[64] = 'J';
}