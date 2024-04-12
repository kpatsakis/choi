void fun()
{
  int entity_8 = 34;
  char entity_7[42] = "";
  entity_7 = NULL;
  char entity_1 = 'o';
  memset(entity_7, 'S', 42-1);
  entity_7[42-1]='';
  entity_8 = 88;
  entity_7[entity_8] = 'x';
}