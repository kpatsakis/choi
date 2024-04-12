void fun()
{
  int entity_2 = 43;
  char entity_7 = 'y';
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(60*sizeof(char));
  entity_8[60-1]='';
  memset(entity_4, 'D', entity_2-1);
  entity_4[entity_2-1]='';
  strcpy(entity_8, entity_4);
}