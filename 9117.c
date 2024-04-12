void fun()
{
  int entity_9 = 26;
  entity_9 = 40;
  char* entity_7;
  char* entity_4;
  char entity_8[95] = "";
  entity_8 = NULL;
  memset(entity_8, 'u', 95-1);
  entity_8[95-1]='';
  entity_7 = (char*)malloc(44*sizeof(char));
  entity_7[44-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  strcpy(entity_4, entity_8);
}