void fun()
{
  int entity_0 = 16;
  entity_0 = 16;
  char* entity_8;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char entity_2 = 'e';
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[90-1]='';
  memset(entity_4, 'K', entity_0-1);
  entity_4[entity_0-1]='';
  strcpy(entity_8, entity_4);
}