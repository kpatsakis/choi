void fun()
{
  int entity_5 = 38;
  char entity_4[90] = "";
  entity_4 = NULL;
  memset(entity_4, 'r', 90-1);
  entity_4[90-1]='';
  entity_4[entity_5] = 'R';
}