void fun()
{
  int entity_0 = 85;
  entity_0 = 17;
  char* entity_7;
  char entity_1[46] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_1, 'Q', 46-1);
  entity_1[46-1]='';
  strcpy(entity_7, entity_1);
}