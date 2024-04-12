void fun()
{
  int entity_6 = 1;
  char entity_4[46] = "";
  entity_4 = NULL;
  char entity_8[35] = "";
  entity_8 = NULL;
  memset(entity_4, 'J', 46-1);
  entity_4[46-1]='';
  memset(entity_8, 'r', 35-1);
  entity_8[35-1]='';
  entity_4[entity_6] = 'Q';
}