void fun()
{
  int entity_9 = 4;
  entity_9 = 93;
  char entity_8[100] = "";
  entity_8 = NULL;
  char* entity_5;
  char entity_0 = 'N';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_8, 'X', 100-1);
  entity_8[100-1]='';
  strcpy(entity_5, entity_8);
}