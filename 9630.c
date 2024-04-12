void fun()
{
  int entity_0 = 45;
  entity_0 = 77;
  char entity_7[98] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_9[78] = "";
  entity_9 = NULL;
  memset(entity_7, 'Y', 98-1);
  entity_7[98-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_9, 'e', 78-1);
  entity_9[78-1]='';
  strcpy(entity_4, entity_7);
}