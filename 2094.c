void fun()
{
  char* entity_1;
  char entity_5 = 'J';
  char entity_9[64] = "";
  entity_9 = NULL;
  char entity_8[8] = "";
  entity_8 = NULL;
  memset(entity_9, 'J', 64-1);
  entity_9[64-1]='';
  memset(entity_8, 'K', 8-1);
  entity_8[8-1]='';
  entity_1 = (char*)malloc(62*sizeof(char));
  entity_1[62-1]='';
  strcpy(entity_1, entity_8);
}