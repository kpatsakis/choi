void fun()
{
  int entity_0 = 71;
  int entity_1 = 71;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'O', entity_0-1);
  entity_7[entity_0-1]='';
  entity_3 = (char*)malloc(91*sizeof(char));
  entity_3[91-1]='';
  strcpy(entity_3, entity_7);
}