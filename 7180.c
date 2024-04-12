void fun()
{
  int entity_6 = 35;
  char entity_2 = 'v';
  char entity_8 = 'V';
  char entity_7[96] = "";
  entity_7 = NULL;
  memset(entity_7, 'Z', 96-1);
  entity_7[96-1]='';
  entity_6 = 55;
  entity_7[entity_6] = 'x';
}