void fun()
{
  int entity_4 = 16;
  char* entity_8;
  char entity_6[93] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_6, 'J', 93-1);
  entity_6[93-1]='';
  strcpy(entity_8, entity_6);
}