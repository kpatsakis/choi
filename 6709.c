void fun()
{
  int entity_2 = 7;
  int entity_8 = 16;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char entity_6 = 'u';
  memset(entity_7, 'X', entity_8-1);
  entity_7[entity_8-1]='';
  entity_7[69] = 'B';
}