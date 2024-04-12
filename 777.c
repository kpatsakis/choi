void fun()
{
  int entity_4 = 50;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'b', entity_4-1);
  entity_3[entity_4-1]='';
  entity_3[32] = 'S';
}