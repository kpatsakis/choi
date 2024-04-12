void fun()
{
  int entity_5 = 91;
  int entity_0 = 91;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char entity_1 = 'N';
  char* entity_7;
  entity_7 = (char*)malloc(78*sizeof(char));
  entity_7[78-1]='';
  memset(entity_6, 'K', entity_0-1);
  entity_6[entity_0-1]='';
  strcpy(entity_7, entity_6);
}