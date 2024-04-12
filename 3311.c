void fun()
{
  int entity_9 = 33;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_0;
  memset(entity_8, 'I', entity_9-1);
  entity_8[entity_9-1]='';
  entity_0 = (char*)malloc(100*sizeof(char));
  entity_0[100-1]='';
  strcpy(entity_0, entity_8);
}