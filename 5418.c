void fun()
{
  int entity_7 = 26;
  char* entity_4;
  char entity_8[89] = "";
  entity_8 = NULL;
  memset(entity_8, 'Y', 89-1);
  entity_8[89-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  entity_7 = 39;
  strcpy(entity_4, entity_8);
}