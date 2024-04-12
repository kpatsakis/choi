void fun()
{
  int entity_9 = 96;
  char entity_4 = 'W';
  char entity_7[61] = "";
  entity_7 = NULL;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_7, 'w', 61-1);
  entity_7[61-1]='';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  memset(entity_8, 'k', entity_9-1);
  entity_8[entity_9-1]='';
  strcpy(entity_2, entity_8);
}