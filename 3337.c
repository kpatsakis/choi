void fun()
{
  int entity_5 = 36;
  char entity_6[50] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_6, 'e', 50-1);
  entity_6[50-1]='';
  strcpy(entity_8, entity_6);
}