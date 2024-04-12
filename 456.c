void fun()
{
  int entity_9 = 83;
  char entity_5 = 'J';
  char* entity_2;
  char entity_8[44] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_8, 'k', 44-1);
  entity_8[44-1]='';
  entity_9 = 30;
  strcpy(entity_2, entity_8);
}