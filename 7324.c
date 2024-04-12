void fun()
{
  int entity_9 = 12;
  int entity_1 = 79;
  char* entity_8;
  char entity_2[13] = "";
  entity_2 = NULL;
  memset(entity_2, 'X', 13-1);
  entity_2[13-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  entity_9 = 84;
  strcpy(entity_8, entity_2);
}