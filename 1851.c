void fun()
{
  int entity_1 = 9;
  entity_1 = 70;
  char entity_0[43] = "";
  entity_0 = NULL;
  memset(entity_0, 'V', 43-1);
  entity_0[43-1]='';
  entity_0[entity_1] = 'O';
}