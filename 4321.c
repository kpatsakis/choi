void fun()
{
  int entity_1 = 53;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char entity_6 = 'U';
  char* entity_5;
  char entity_7 = 'b';
  memset(entity_4, 'Z', entity_1-1);
  entity_4[entity_1-1]='';
  entity_5 = (char*)malloc(73*sizeof(char));
  entity_5[73-1]='';
  strcpy(entity_5, entity_4);
}