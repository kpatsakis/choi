void fun()
{
  int entity_9 = 45;
  char entity_4[84] = "";
  entity_4 = NULL;
  memset(entity_4, 'x', 84-1);
  entity_4[84-1]='';
  entity_9 = 70;
  entity_4[entity_9] = 'x';
}