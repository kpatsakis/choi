void fun()
{
  int entity_3 = 39;
  int entity_6 = 21;
  int entity_5 = 53;
  entity_5 = 84;
  char entity_0[89] = "";
  entity_0 = NULL;
  char* entity_9;
  memset(entity_0, 'F', 89-1);
  entity_0[89-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  strcpy(entity_9, entity_0);
}