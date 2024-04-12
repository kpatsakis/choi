void fun()
{
  int entity_1 = 60;
  char* entity_0;
  char entity_9[35] = "";
  entity_9 = NULL;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_9, 'h', 35-1);
  entity_9[35-1]='';
  strcpy(entity_0, entity_9);
}