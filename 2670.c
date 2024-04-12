void fun()
{
  int entity_7 = 69;
  int entity_0 = 56;
  char entity_1 = 'm';
  char* entity_9;
  char entity_2[74] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_2, 'F', 74-1);
  entity_2[74-1]='';
  entity_0 = 88;
  strcpy(entity_9, entity_2);
}