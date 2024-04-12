void fun()
{
  int entity_0 = 42;
  int entity_5 = 18;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char entity_2 = 'C';
  char entity_8 = 'b';
  memset(entity_7, 'j', entity_5-1);
  entity_7[entity_5-1]='';
  entity_7[76] = 'X';
}