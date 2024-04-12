void fun()
{
  int entity_0 = 31;
  entity_0 = 92;
  char entity_2[36] = "";
  entity_2 = NULL;
  char entity_3[95] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'D', 95-1);
  entity_3[95-1]='';
  memset(entity_2, 'W', 36-1);
  entity_2[36-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  strcpy(entity_9, entity_2);
}