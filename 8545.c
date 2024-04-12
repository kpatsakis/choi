void fun()
{
  int entity_2 = 82;
  int entity_4 = 54;
  char entity_9[72] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_0[30] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memset(entity_9, 'E', 72-1);
  entity_9[72-1]='';
  memset(entity_0, 'b', 30-1);
  entity_0[30-1]='';
  entity_2 = 10;
  strcpy(entity_3, entity_0);
}