void fun()
{
  int entity_7 = 38;
  char entity_5[23] = "";
  entity_5 = NULL;
  memset(entity_5, 'q', 23-1);
  entity_5[23-1]='';
  entity_5[entity_7] = 'D';
}