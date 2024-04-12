void fun()
{
  int entity_5 = 3;
  char entity_7[42] = "";
  entity_7 = NULL;
  char* entity_8;
  char* entity_9;
  memset(entity_7, 'k', 42-1);
  entity_7[42-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[67-1]='';
  strcpy(entity_8, entity_7);
}