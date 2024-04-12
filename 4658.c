void fun()
{
  int entity_7 = 95;
  int entity_3 = 95;
  int entity_8 = 85;
  char entity_9[95] = "";
  entity_9 = NULL;
  char entity_6 = 'A';
  char* entity_4;
  memset(entity_9, 'N', 95-1);
  entity_9[95-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  strcpy(entity_4, entity_9);
}