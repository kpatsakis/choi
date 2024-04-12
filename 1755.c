void fun()
{
  int entity_9 = 9;
  char* entity_2;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  memset(entity_0, 'f', entity_9-1);
  entity_0[entity_9-1]='';
  entity_2 = (char*)malloc(7*sizeof(char));
  entity_2[7-1]='';
  strcpy(entity_2, entity_0);
}