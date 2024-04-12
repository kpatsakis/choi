void fun()
{
  int entity_2 = 60;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 'E', entity_2-1);
  entity_1[entity_2-1]='';
  entity_1[10] = 'J';
}