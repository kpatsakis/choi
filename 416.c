void fun()
{
  int entity_7 = 19;
  char entity_4[34] = "";
  entity_4 = NULL;
  memset(entity_4, 'S', 34-1);
  entity_4[34-1]='';
  entity_7 = 38;
  entity_4[entity_7] = 'z';
}