void fun()
{
  int entity_0 = 9;
  char* entity_8;
  char entity_3 = 't';
  char entity_7[8] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(27*sizeof(char));
  entity_8[27-1]='';
  memset(entity_7, 'K', 8-1);
  entity_7[8-1]='';
  strcpy(entity_8, entity_7);
}