void fun()
{
  int entity_4 = 78;
  char entity_1[31] = "";
  entity_1 = NULL;
  memset(entity_1, 'J', 31-1);
  entity_1[31-1]='';
  entity_4 = 30;
  entity_1[entity_4] = 'r';
}