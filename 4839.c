void fun()
{
  int entity_4 = 19;
  char entity_3 = 'F';
  char entity_5[93] = "";
  entity_5 = NULL;
  memset(entity_5, 'B', 93-1);
  entity_5[93-1]='';
  entity_4 = 5;
  entity_5[entity_4] = 'A';
}