void fun()
{
  int entity_2 = 12;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  memset(entity_0, 'g', entity_2-1);
  entity_0[entity_2-1]='';
  entity_0[42] = 's';
}