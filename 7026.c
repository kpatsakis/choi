void fun()
{
  int entity_8 = 43;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(100*sizeof(char));
  entity_0[100-1]='';
  memset(entity_7, 'T', entity_8-1);
  entity_7[entity_8-1]='';
  strcpy(entity_0, entity_7);
}