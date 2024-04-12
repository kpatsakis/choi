void fun()
{
  int entity_2 = 22;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 'J', entity_2-1);
  entity_1[entity_2-1]='';
  entity_1[5] = 'r';
}