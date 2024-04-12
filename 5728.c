void fun()
{
  int entity_6 = 8;
  entity_6 = 44;
  char entity_1[53] = "";
  entity_1 = NULL;
  memset(entity_1, 'y', 53-1);
  entity_1[53-1]='';
  entity_1[entity_6] = 'j';
}