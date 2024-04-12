void fun()
{
  int entity_5 = 29;
  char* entity_1;
  char entity_7[89] = "";
  entity_7 = NULL;
  char* entity_6;
  char entity_0 = 'm';
  memset(entity_7, 'C', 89-1);
  entity_7[89-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  entity_1 = (char*)malloc(57*sizeof(char));
  entity_1[57-1]='';
  strcpy(entity_6, entity_7);
}