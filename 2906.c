void fun()
{
  int entity_0 = 26;
  entity_0 = 26;
  char* entity_1;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  memset(entity_7, 'u', entity_0-1);
  entity_7[entity_0-1]='';
  entity_1 = (char*)malloc(54*sizeof(char));
  entity_1[54-1]='';
  strcpy(entity_1, entity_7);
}