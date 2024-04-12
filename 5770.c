void fun()
{
  int entity_0 = 68;
  char* entity_8;
  char entity_7[48] = "";
  entity_7 = NULL;
  char entity_2 = 'v';
  memset(entity_7, 'S', 48-1);
  entity_7[48-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  strcpy(entity_8, entity_7);
}