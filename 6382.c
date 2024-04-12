void fun()
{
  int entity_0 = 65;
  int entity_5 = 49;
  int entity_4 = 82;
  char* entity_1;
  char entity_3[95] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_3, 'q', 95-1);
  entity_3[95-1]='';
  strcpy(entity_1, entity_3);
}