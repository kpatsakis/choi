void fun()
{
  int entity_4 = 57;
  char* entity_9;
  char entity_6[98] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memset(entity_6, 'u', 98-1);
  entity_6[98-1]='';
  entity_4 = 11;
  strcpy(entity_9, entity_6);
}