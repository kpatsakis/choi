void fun()
{
  int entity_0 = 30;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_1, 'l', entity_0-1);
  entity_1[entity_0-1]='';
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  entity_0 = 71;
  strcpy(entity_6, entity_1);
}