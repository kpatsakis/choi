void fun()
{
  int entity_9 = 99;
  char entity_5[64] = "";
  entity_5 = NULL;
  memset(entity_5, 'U', 64-1);
  entity_5[64-1]='';
  entity_9 = 74;
  entity_5[entity_9] = 'Y';
}