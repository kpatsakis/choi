void fun()
{
  int entity_5 = 48;
  int entity_1 = 4;
  char entity_7[35] = "";
  entity_7 = NULL;
  char* entity_9;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_7, 'f', 35-1);
  entity_7[35-1]='';
  entity_9 = (char*)malloc(30*sizeof(char));
  entity_9[30-1]='';
  memset(entity_8, 'S', entity_5-1);
  entity_8[entity_5-1]='';
  entity_5 = 70;
  strcpy(entity_9, entity_8);
}