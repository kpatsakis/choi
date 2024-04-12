void fun()
{
  int entity_9 = 27;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(68*sizeof(char));
  entity_0[68-1]='';
  memset(entity_1, 'A', entity_9-1);
  entity_1[entity_9-1]='';
  strcpy(entity_0, entity_1);
}