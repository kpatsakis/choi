void fun()
{
  int entity_5 = 7;
  entity_5 = 66;
  char entity_6[34] = "";
  entity_6 = NULL;
  memset(entity_6, 'i', 34-1);
  entity_6[34-1]='';
  entity_6[entity_5] = 'G';
}