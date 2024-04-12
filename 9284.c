void fun()
{
  int entity_8 = 12;
  entity_8 = 73;
  char entity_1[71] = "";
  entity_1 = NULL;
  memset(entity_1, 'O', 71-1);
  entity_1[71-1]='';
  entity_1[entity_8] = 'D';
}