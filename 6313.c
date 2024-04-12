void fun()
{
  int entity_9 = 92;
  int entity_5 = 60;
  char entity_3[4] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_2 = 'k';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_3, 'E', 4-1);
  entity_3[4-1]='';
  strcpy(entity_8, entity_3);
}