void fun()
{
  int entity_2 = 33;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 'n', entity_2-1);
  entity_1[entity_2-1]='';
  entity_1[32] = 'k';
}