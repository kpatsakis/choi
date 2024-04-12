void fun()
{
  int entity_1 = 21;
  entity_1 = 20;
  char* entity_0;
  char entity_4[95] = "";
  entity_4 = NULL;
  char* entity_7;
  entity_0 = (char*)malloc(19*sizeof(char));
  entity_0[19-1]='';
  memset(entity_4, 'C', 95-1);
  entity_4[95-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  strcpy(entity_7, entity_4);
}