void fun()
{
  int entity_0 = 14;
  char entity_4 = 'o';
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[7-1]='';
  memset(entity_6, 'n', entity_0-1);
  entity_6[entity_0-1]='';
  strcpy(entity_8, entity_6);
}