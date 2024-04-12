void fun()
{
  int entity_5 = 77;
  char* entity_8;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'F', entity_5-1);
  entity_1[entity_5-1]='';
  entity_8 = (char*)malloc(95*sizeof(char));
  entity_8[95-1]='';
  strcpy(entity_8, entity_1);
}