void fun()
{
  int entity_9 = 1;
  int entity_8 = 94;
  entity_8 = 94;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_4;
  memset(entity_7, 'v', entity_8-1);
  entity_7[entity_8-1]='';
  entity_5 = (char*)malloc(34*sizeof(char));
  entity_5[34-1]='';
  entity_4 = (char*)malloc(54*sizeof(char));
  entity_4[54-1]='';
  strcpy(entity_5, entity_7);
}