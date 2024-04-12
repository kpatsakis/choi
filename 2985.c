void fun()
{
  int entity_5 = 4;
  char* entity_6;
  char* entity_4;
  char entity_9 = 'A';
  char entity_7[14] = "";
  entity_7 = NULL;
  memset(entity_7, 'C', 14-1);
  entity_7[14-1]='';
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[97-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  entity_5 = 60;
  strcpy(entity_6, entity_7);
}