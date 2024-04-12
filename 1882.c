void fun()
{
  int entity_4 = 38;
  char entity_5 = 'W';
  char entity_0[26] = "";
  entity_0 = NULL;
  char* entity_7;
  char entity_3 = 'V';
  memset(entity_0, 'Z', 26-1);
  entity_0[26-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  entity_4 = 85;
  strcpy(entity_7, entity_0);
}