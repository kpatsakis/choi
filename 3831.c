void fun()
{
  int entity_4 = 90;
  int entity_0 = 86;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_1 = 'O';
  char* entity_9;
  entity_9 = (char*)malloc(15*sizeof(char));
  entity_9[15-1]='';
  memset(entity_3, 'v', entity_4-1);
  entity_3[entity_4-1]='';
  entity_8 = (char*)malloc(66*sizeof(char));
  entity_8[66-1]='';
  strcpy(entity_9, entity_3);
}