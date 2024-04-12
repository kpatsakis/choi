void fun()
{
  int entity_4 = 61;
  char entity_8[3] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'q', 3-1);
  entity_8[3-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  strcpy(entity_5, entity_8);
}