void fun()
{
  int entity_5 = 34;
  entity_5 = 48;
  char entity_7 = 'l';
  char entity_3[48] = "";
  entity_3 = NULL;
  memset(entity_3, 'e', 48-1);
  entity_3[48-1]='';
  entity_3[entity_5] = 'W';
}