void fun()
{
  int entity_9 = 48;
  char* entity_0;
  char entity_1[93] = "";
  entity_1 = NULL;
  memset(entity_1, 'G', 93-1);
  entity_1[93-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  strcpy(entity_0, entity_1);
}