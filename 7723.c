void fun()
{
  int entity_0 = 40;
  char* entity_3;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_1, 'R', entity_0-1);
  entity_1[entity_0-1]='';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[93-1]='';
  strcpy(entity_3, entity_1);
}