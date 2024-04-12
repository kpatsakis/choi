void fun()
{
  int entity_6 = 88;
  int entity_1 = 10;
  char* entity_7;
  char entity_9 = 'y';
  char entity_4[46] = "";
  entity_4 = NULL;
  memset(entity_4, 'x', 46-1);
  entity_4[46-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  strcpy(entity_7, entity_4);
}