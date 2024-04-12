void fun()
{
  int entity_0 = 96;
  entity_0 = 86;
  char* entity_2;
  char entity_9 = 'g';
  char entity_5[28] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  memset(entity_5, 'F', 28-1);
  entity_5[28-1]='';
  strcpy(entity_2, entity_5);
}