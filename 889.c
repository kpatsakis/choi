void fun()
{
  int entity_2 = 92;
  char entity_8[43] = "";
  entity_8 = NULL;
  memset(entity_8, 'M', 43-1);
  entity_8[43-1]='';
  entity_8[entity_2] = 'B';
}