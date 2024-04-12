void fun()
{
  int entity_9 = 26;
  int entity_2 = 48;
  char entity_6[73] = "";
  entity_6 = NULL;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_8;
  char* entity_7;
  memset(entity_4, 'a', entity_9-1);
  entity_4[entity_9-1]='';
  entity_8 = (char*)malloc(17*sizeof(char));
  entity_8[17-1]='';
  memset(entity_6, 'v', 73-1);
  entity_6[73-1]='';
  entity_7 = (char*)malloc(48*sizeof(char));
  entity_7[48-1]='';
  strcpy(entity_8, entity_4);
}