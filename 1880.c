void fun()
{
  int entity_9 = 84;
  int entity_6 = 71;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(45*sizeof(char));
  entity_0[45-1]='';
  memset(entity_2, 'C', entity_9-1);
  entity_2[entity_9-1]='';
  strcpy(entity_0, entity_2);
}