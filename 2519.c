void fun()
{
  int entity_1 = 11;
  entity_1 = 22;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 'r', entity_1-1);
  entity_2[entity_1-1]='';
  entity_2[76] = 'x';
}