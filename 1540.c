void fun()
{
  int entity_1 = 42;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'O', entity_1-1);
  entity_7[entity_1-1]='';
  entity_7[94] = 'p';
}