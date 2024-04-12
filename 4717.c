void fun()
{
  int entity_0 = 46;
  char* entity_8;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  memset(entity_4, 'p', entity_0-1);
  entity_4[entity_0-1]='';
  entity_8 = (char*)malloc(2*sizeof(char));
  entity_8[2-1]='';
  strcpy(entity_8, entity_4);
}