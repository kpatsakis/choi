void fun()
{
  int entity_8 = 25;
  int entity_1 = 74;
  char entity_4[4] = "";
  entity_4 = NULL;
  memset(entity_4, 'S', 4-1);
  entity_4[4-1]='';
  entity_8 = 17;
  entity_4[entity_8] = 'z';
}