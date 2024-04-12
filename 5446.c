void fun()
{
  int entity_6 = 40;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'S', entity_6-1);
  entity_2[entity_6-1]='';
  entity_6 = 99;
  entity_2[51] = 'U';
}