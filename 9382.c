void fun()
{
  int entity_2 = 30;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'J', entity_2-1);
  entity_4[entity_2-1]='';
  entity_4[30] = 'x';
}