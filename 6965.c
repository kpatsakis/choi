void fun()
{
  int entity_2 = 22;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char entity_7 = 'B';
  memset(entity_4, 'H', entity_2-1);
  entity_4[entity_2-1]='';
  entity_2 = 49;
  entity_4[55] = 'J';
}