void fun()
{
  int entity_1 = 34;
  entity_1 = 43;
  char entity_5[55] = "";
  entity_5 = NULL;
  memset(entity_5, 'p', 55-1);
  entity_5[55-1]='';
  entity_5[entity_1] = 'A';
}