void fun()
{
  int entity_6 = 61;
  int entity_1 = 60;
  char* entity_5;
  char entity_4[39] = "";
  entity_4 = NULL;
  memset(entity_4, 'G', 39-1);
  entity_4[39-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  strcpy(entity_5, entity_4);
}