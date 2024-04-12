void fun()
{
  int entity_8 = 71;
  int entity_3 = 59;
  int entity_5 = 93;
  entity_8 = 57;
  char* entity_2;
  char entity_9[93] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memset(entity_9, 'u', 93-1);
  entity_9[93-1]='';
  strcpy(entity_2, entity_9);
}