void fun()
{
  int entity_1 = 10;
  char* entity_9;
  char entity_3 = 'F';
  char entity_8[95] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', 95-1);
  entity_8[95-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  entity_1 = 51;
  strcpy(entity_9, entity_8);
}