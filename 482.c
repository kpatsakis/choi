void fun()
{
  int entity_0 = 85;
  int entity_1 = 26;
  entity_0 = 85;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_5;
  memset(entity_6, 'B', entity_0-1);
  entity_6[entity_0-1]='';
  entity_5 = (char*)malloc(60*sizeof(char));
  entity_5[60-1]='';
  strcpy(entity_5, entity_6);
}