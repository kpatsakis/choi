void fun()
{
  int entity_5 = 47;
  char entity_6[48] = "";
  entity_6 = NULL;
  memset(entity_6, 'k', 48-1);
  entity_6[48-1]='';
  entity_6[entity_5] = 'S';
}