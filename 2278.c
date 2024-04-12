void fun()
{
  int entity_4 = 64;
  entity_4 = 42;
  char entity_2 = 'b';
  char entity_7[39] = "";
  entity_7 = NULL;
  memset(entity_7, 'm', 39-1);
  entity_7[39-1]='';
  entity_7[entity_4] = 'T';
}