void fun()
{
  int entity_2 = 10;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_6, 'm', entity_2-1);
  entity_6[entity_2-1]='';
  entity_6[61] = 'R';
}