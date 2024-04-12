void fun()
{
  int entity_7 = 27;
  char entity_1[32] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_1, 'Z', 32-1);
  entity_1[32-1]='';
  strcpy(entity_8, entity_1);
}