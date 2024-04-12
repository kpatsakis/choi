void fun()
{
  int entity_2 = 88;
  entity_2 = 48;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 'E', entity_2-1);
  entity_1[entity_2-1]='';
  entity_1[2] = 'S';
}