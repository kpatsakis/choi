void fun()
{
  int entity_6 = 33;
  char entity_4[96] = "";
  entity_4 = NULL;
  char entity_7[76] = "";
  entity_7 = NULL;
  memset(entity_4, 'z', 96-1);
  entity_4[96-1]='';
  memset(entity_7, 'U', 76-1);
  entity_7[76-1]='';
  entity_6 = 93;
  entity_7[entity_6] = 'h';
}