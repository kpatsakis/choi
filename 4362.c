void fun()
{
  int entity_7 = 91;
  entity_7 = 9;
  char entity_3[92] = "";
  entity_3 = NULL;
  memset(entity_3, 'D', 92-1);
  entity_3[92-1]='';
  entity_3[entity_7] = 'S';
}