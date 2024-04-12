void fun()
{
  int entity_5 = 28;
  int entity_9 = 50;
  char* entity_8;
  char entity_0[71] = "";
  entity_0 = NULL;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_0, 'F', 71-1);
  entity_0[71-1]='';
  memset(entity_2, 'k', entity_5-1);
  entity_2[entity_5-1]='';
  entity_8 = (char*)malloc(42*sizeof(char));
  entity_8[42-1]='';
  strcpy(entity_8, entity_2);
}