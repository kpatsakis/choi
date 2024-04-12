void fun()
{
  int entity_9 = 29;
  entity_9 = 67;
  char entity_0[40] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_2[55] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_0, 'B', 40-1);
  entity_0[40-1]='';
  memset(entity_2, 'i', 55-1);
  entity_2[55-1]='';
  strcpy(entity_3, entity_2);
}