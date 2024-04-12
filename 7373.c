void fun()
{
  int entity_7 = 3;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'B', entity_7-1);
  entity_4[entity_7-1]='';
  entity_0 = (char*)malloc(54*sizeof(char));
  entity_0[54-1]='';
  strcpy(entity_0, entity_4);
}