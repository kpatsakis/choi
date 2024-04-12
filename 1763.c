void fun()
{
  int entity_0 = 16;
  char entity_8[70] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_8, 'M', 70-1);
  entity_8[70-1]='';
  entity_0 = 79;
  strcpy(entity_4, entity_8);
}