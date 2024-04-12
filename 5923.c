void fun()
{
  int entity_6 = 53;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[67-1]='';
  memset(entity_1, 'I', entity_6-1);
  entity_1[entity_6-1]='';
  strcpy(entity_0, entity_1);
}