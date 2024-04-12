void fun()
{
  int entity_7 = 73;
  char entity_1[46] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_1, 'h', 46-1);
  entity_1[46-1]='';
  strcpy(entity_8, entity_1);
}