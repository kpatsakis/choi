void fun()
{
  int entity_7 = 77;
  char entity_8[58] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_8, 'u', 58-1);
  entity_8[58-1]='';
  strcpy(entity_1, entity_8);
}