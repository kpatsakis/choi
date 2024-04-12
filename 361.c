void fun()
{
  int entity_5 = 22;
  int entity_4 = 94;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  memset(entity_3, 'c', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[17] = 'h';
}