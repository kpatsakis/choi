void fun()
{
  int entity_1 = 29;
  char entity_4[48] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'Q', 48-1);
  entity_4[48-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  strcpy(entity_6, entity_4);
}