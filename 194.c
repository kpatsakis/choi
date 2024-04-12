void fun()
{
  int entity_6 = 12;
  entity_6 = 37;
  char entity_3[80] = "";
  entity_3 = NULL;
  char entity_7[64] = "";
  entity_7 = NULL;
  memset(entity_3, 'p', 80-1);
  entity_3[80-1]='';
  memset(entity_7, 'O', 64-1);
  entity_7[64-1]='';
  entity_7[entity_6] = 'r';
}