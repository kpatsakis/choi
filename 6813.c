void fun()
{
  int entity_1 = 6;
  entity_1 = 93;
  char* entity_9;
  char entity_7 = 'x';
  char entity_8[2] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_8, 'T', 2-1);
  entity_8[2-1]='';
  strcpy(entity_9, entity_8);
}