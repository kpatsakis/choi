void fun()
{
  int entity_8 = 48;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char entity_4 = 'f';
  memset(entity_1, 'X', entity_8-1);
  entity_1[entity_8-1]='';
  entity_1[50] = 'k';
}