void fun()
{
  int entity_7 = 85;
  int entity_8 = 36;
  char* entity_4;
  char entity_3[60] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_3, 'x', 60-1);
  entity_3[60-1]='';
  strcpy(entity_4, entity_3);
}