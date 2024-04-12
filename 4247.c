void fun()
{
  int entity_7 = 72;
  int entity_0 = 88;
  char* entity_5;
  char entity_3 = 'j';
  char entity_4[8] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_4, 'q', 8-1);
  entity_4[8-1]='';
  strcpy(entity_5, entity_4);
}