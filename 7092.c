void fun()
{
  int entity_1 = 48;
  int entity_5 = 43;
  char* entity_6;
  char entity_9[84] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_9, 'O', 84-1);
  entity_9[84-1]='';
  entity_5 = 23;
  strcpy(entity_6, entity_9);
}