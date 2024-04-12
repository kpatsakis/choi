void fun()
{
  int entity_1 = 6;
  entity_1 = 72;
  char entity_3[3] = "";
  entity_3 = NULL;
  char entity_9 = 'j';
  memset(entity_3, 'n', 3-1);
  entity_3[3-1]='';
  entity_3[entity_1] = 'D';
}