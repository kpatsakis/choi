void fun()
{
  int entity_0 = 66;
  char* entity_7;
  char entity_5[91] = "";
  entity_5 = NULL;
  char entity_6 = 'Z';
  memset(entity_5, 'F', 91-1);
  entity_5[91-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  strcpy(entity_7, entity_5);
}