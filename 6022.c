void fun()
{
  int entity_3 = 47;
  entity_3 = 47;
  char entity_2 = 'H';
  char* entity_7;
  char* entity_9;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  memset(entity_8, 'G', entity_3-1);
  entity_8[entity_3-1]='';
  entity_9 = (char*)malloc(15*sizeof(char));
  entity_9[15-1]='';
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  strcpy(entity_9, entity_8);
}