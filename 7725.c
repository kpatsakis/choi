void fun()
{
  int entity_2 = 33;
  char entity_6[19] = "";
  entity_6 = NULL;
  char entity_5 = 'H';
  memset(entity_6, 'a', 19-1);
  entity_6[19-1]='';
  entity_2 = 69;
  entity_6[entity_2] = 'D';
}