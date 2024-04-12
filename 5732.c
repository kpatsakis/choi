void fun()
{
  int entity_2 = 30;
  int entity_7 = 5;
  char entity_3 = 'C';
  char entity_8[71] = "";
  entity_8 = NULL;
  memset(entity_8, 'F', 71-1);
  entity_8[71-1]='';
  entity_8[entity_2] = 'Y';
}