void fun()
{
  int entity_0 = 41;
  char* entity_2;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(30*sizeof(char));
  entity_2[30-1]='';
  memset(entity_7, 'B', entity_0-1);
  entity_7[entity_0-1]='';
  strcpy(entity_2, entity_7);
}