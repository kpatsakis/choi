void fun()
{
  int entity_2 = 45;
  char entity_5 = 'm';
  char* entity_4;
  char entity_8[4] = "";
  entity_8 = NULL;
  char* entity_9;
  memset(entity_8, 'C', 4-1);
  entity_8[4-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[37-1]='';
  strcpy(entity_9, entity_8);
}