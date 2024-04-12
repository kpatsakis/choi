void fun()
{
  int entity_1 = 9;
  char entity_7[74] = "";
  entity_7 = NULL;
  memset(entity_7, 'A', 74-1);
  entity_7[74-1]='';
  entity_7[27] = 'O';
}