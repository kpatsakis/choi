void fun()
{
  int entity_7 = 8;
  char entity_3 = 'l';
  char entity_8[9] = "";
  entity_8 = NULL;
  char entity_1[21] = "";
  entity_1 = NULL;
  memset(entity_8, 'o', 9-1);
  entity_8[9-1]='';
  memset(entity_1, 'a', 21-1);
  entity_1[21-1]='';
  entity_7 = 13;
  entity_8[entity_7] = 'g';
}