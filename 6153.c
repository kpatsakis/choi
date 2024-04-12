void fun()
{
  int entity_1 = 84;
  entity_1 = 18;
  char* entity_9;
  char entity_5 = 'F';
  char entity_0[21] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_0, 'u', 21-1);
  entity_0[21-1]='';
  strcpy(entity_9, entity_0);
}