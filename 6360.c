void fun()
{
  int entity_5 = 44;
  char* entity_0;
  char entity_1[87] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_1, 'X', 87-1);
  entity_1[87-1]='';
  strcpy(entity_0, entity_1);
}