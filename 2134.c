void fun()
{
  int entity_5 = 59;
  char entity_2 = 'O';
  char entity_8[85] = "";
  entity_8 = NULL;
  memset(entity_8, 'g', 85-1);
  entity_8[85-1]='';
  entity_8[entity_5] = 'r';
}