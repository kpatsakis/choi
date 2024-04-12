void fun()
{
  int entity_1 = 93;
  entity_1 = 16;
  char entity_7[53] = "";
  entity_7 = NULL;
  memset(entity_7, 'u', 53-1);
  entity_7[53-1]='';
  entity_7[entity_1] = 'G';
}