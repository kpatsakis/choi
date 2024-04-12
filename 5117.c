void fun()
{
  int entity_3 = 79;
  int entity_4 = 21;
  char entity_7[39] = "";
  entity_7 = NULL;
  char* entity_9;
  char* entity_8;
  entity_9 = (char*)malloc(40*sizeof(char));
  entity_9[40-1]='';
  memset(entity_7, 'C', 39-1);
  entity_7[39-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  strcpy(entity_8, entity_7);
}