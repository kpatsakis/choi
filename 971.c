void fun()
{
  int entity_7 = 44;
  int entity_5 = 12;
  int entity_2 = 14;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char entity_9 = 'U';
  char* entity_4;
  entity_4 = (char*)malloc(17*sizeof(char));
  entity_4[17-1]='';
  memset(entity_8, 'v', entity_7-1);
  entity_8[entity_7-1]='';
  strcpy(entity_4, entity_8);
}