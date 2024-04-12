void fun()
{
  int entity_9 = 25;
  char entity_3[54] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 't', 54-1);
  entity_3[54-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  strcpy(entity_0, entity_3);
}