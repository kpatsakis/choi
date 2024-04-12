void fun()
{
  int entity_7 = 7;
  char entity_4[44] = "";
  entity_4 = NULL;
  char entity_1[42] = "";
  entity_1 = NULL;
  memset(entity_1, 'E', 42-1);
  entity_1[42-1]='';
  memset(entity_4, 'b', 44-1);
  entity_4[44-1]='';
  entity_1[54] = 'u';
}