void fun()
{
  int entity_5 = 22;
  char* entity_6;
  char entity_4 = 'x';
  char entity_7[65] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_7, 'w', 65-1);
  entity_7[65-1]='';
  strcpy(entity_6, entity_7);
}