void fun()
{
  int entity_1 = 25;
  char entity_5[20] = "";
  entity_5 = NULL;
  memset(entity_5, 'e', 20-1);
  entity_5[20-1]='';
  entity_1 = 90;
  entity_5[entity_1] = 'r';
}