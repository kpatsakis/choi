void fun()
{
  int entity_2 = 27;
  char* entity_0;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'w', entity_2-1);
  entity_7[entity_2-1]='';
  entity_0 = (char*)malloc(32*sizeof(char));
  entity_0[32-1]='';
  strcpy(entity_0, entity_7);
}