void fun()
{
  int entity_8 = 71;
  char entity_3 = 'D';
  char entity_0[50] = "";
  entity_0 = NULL;
  char entity_5 = 'e';
  char* entity_9;
  memset(entity_0, 'F', 50-1);
  entity_0[50-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  entity_8 = 22;
  strcpy(entity_9, entity_0);
}