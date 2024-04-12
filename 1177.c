void fun()
{
  int entity_5 = 72;
  entity_5 = 52;
  char entity_6[63] = "";
  entity_6 = NULL;
  memset(entity_6, 'o', 63-1);
  entity_6[63-1]='';
  entity_6[entity_5] = 'd';
}