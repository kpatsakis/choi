void fun()
{
  int entity_2 = 37;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'n', entity_2-1);
  entity_3[entity_2-1]='';
  entity_3[19] = 'U';
}