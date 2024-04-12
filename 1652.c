void fun()
{
  int entity_4 = 32;
  char entity_5[16] = "";
  entity_5 = NULL;
  memset(entity_5, 'E', 16-1);
  entity_5[16-1]='';
  entity_5[entity_4] = 'J';
}