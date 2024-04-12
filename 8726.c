void fun()
{
  int entity_0 = 91;
  char* entity_6;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(83*sizeof(char));
  entity_6[83-1]='';
  memset(entity_1, 'X', entity_0-1);
  entity_1[entity_0-1]='';
  strcpy(entity_6, entity_1);
}