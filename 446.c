void fun()
{
  int entity_7 = 68;
  char* entity_6;
  char entity_5 = 'V';
  char entity_8[59] = "";
  entity_8 = NULL;
  memset(entity_8, 'w', 59-1);
  entity_8[59-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  strcpy(entity_6, entity_8);
}