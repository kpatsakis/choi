void fun()
{
  int entity_1 = 4;
  int entity_3 = 80;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(95*sizeof(char));
  entity_4[95-1]='';
  memset(entity_5, 'N', entity_1-1);
  entity_5[entity_1-1]='';
  strcpy(entity_4, entity_5);
}