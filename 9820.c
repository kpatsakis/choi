void fun()
{
  int entity_8 = 44;
  char* entity_4;
  char entity_5[89] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'B', 89-1);
  entity_5[89-1]='';
  entity_9 = (char*)malloc(19*sizeof(char));
  entity_9[19-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  entity_8 = 3;
  strcpy(entity_4, entity_5);
}