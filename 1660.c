void fun()
{
  int entity_7 = 23;
  char entity_8[2] = "";
  entity_8 = NULL;
  char* entity_9;
  char* entity_5;
  char entity_4 = 'M';
  memset(entity_8, 'y', 2-1);
  entity_8[2-1]='';
  entity_5 = (char*)malloc(64*sizeof(char));
  entity_5[64-1]='';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  entity_7 = 16;
  strcpy(entity_9, entity_8);
}