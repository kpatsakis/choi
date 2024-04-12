void fun()
{
  int entity_3 = 84;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char entity_2 = 'W';
  memset(entity_1, 'u', entity_3-1);
  entity_1[entity_3-1]='';
  entity_3 = 98;
  entity_1[78] = 'c';
}