void fun()
{
  int entity_3 = 66;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char entity_5[27] = "";
  entity_5 = NULL;
  char entity_2 = 'G';
  memset(entity_9, 'O', entity_3-1);
  entity_9[entity_3-1]='';
  memset(entity_5, 'o', 27-1);
  entity_5[27-1]='';
  entity_3 = 69;
  entity_9[55] = 'b';
}