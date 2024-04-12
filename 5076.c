void fun()
{
  int entity_2 = 59;
  int entity_0 = 77;
  int entity_8 = 8;
  char entity_4[83] = "";
  entity_4 = NULL;
  char entity_5[84] = "";
  entity_5 = NULL;
  memset(entity_5, 'C', 84-1);
  entity_5[84-1]='';
  memset(entity_4, 'D', 83-1);
  entity_4[83-1]='';
  entity_4[entity_2] = 's';
}