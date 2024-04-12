void fun()
{
  int entity_5 = 73;
  char entity_8[67] = "";
  entity_8 = NULL;
  memset(entity_8, 'j', 67-1);
  entity_8[67-1]='';
  entity_5 = 47;
  entity_8[entity_5] = 'B';
}