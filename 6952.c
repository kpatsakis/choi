void fun()
{
  int entity_0 = 41;
  entity_0 = 41;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'U', entity_0-1);
  entity_1[entity_0-1]='';
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[2-1]='';
  strcpy(entity_2, entity_1);
}