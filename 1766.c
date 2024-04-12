void fun()
{
  int entity_1 = 42;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'a', entity_1-1);
  entity_3[entity_1-1]='';
  entity_1 = 51;
  entity_3[46] = 'O';
}