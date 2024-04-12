void fun()
{
  int entity_2 = 87;
  int entity_6 = 1;
  entity_2 = 83;
  char entity_8 = 'Y';
  char entity_1[50] = "";
  entity_1 = NULL;
  memset(entity_1, 'n', 50-1);
  entity_1[50-1]='';
  entity_1[entity_2] = 'p';
}