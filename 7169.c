void fun()
{
  int entity_8 = 76;
  int entity_2 = 19;
  entity_2 = 52;
  char entity_4 = 'x';
  char entity_5[66] = "";
  entity_5 = NULL;
  char entity_3[58] = "";
  entity_3 = NULL;
  memset(entity_5, 'X', 66-1);
  entity_5[66-1]='';
  memset(entity_3, 'L', 58-1);
  entity_3[58-1]='';
  entity_3[entity_2] = 'R';
}