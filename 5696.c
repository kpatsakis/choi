void fun()
{
  int entity_0 = 79;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'i', entity_0-1);
  entity_1[entity_0-1]='';
  entity_2 = (char*)malloc(47*sizeof(char));
  entity_2[47-1]='';
  entity_0 = 71;
  strcpy(entity_2, entity_1);
}