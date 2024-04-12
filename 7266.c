void fun()
{
  int entity_5 = 60;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  memset(entity_3, 'b', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[98] = 'S';
}