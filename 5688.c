void fun()
{
  int entity_2 = 74;
  int entity_1 = 48;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_4, 'J', entity_1-1);
  entity_4[entity_1-1]='';
  entity_1 = 59;
  entity_4[86] = 'o';
}