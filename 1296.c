void fun()
{
  int entity_5 = 40;
  char entity_3[48] = "";
  entity_3 = NULL;
  char entity_6 = 'G';
  memset(entity_3, 'h', 48-1);
  entity_3[48-1]='';
  entity_3[entity_5] = 't';
}