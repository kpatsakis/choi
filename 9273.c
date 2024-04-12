void fun()
{
  int entity_9 = 79;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char entity_4[99] = "";
  entity_4 = NULL;
  char entity_1 = 'X';
  char entity_3 = 'U';
  char* entity_7;
  entity_7 = (char*)malloc(49*sizeof(char));
  entity_7[49-1]='';
  memset(entity_4, 'I', 99-1);
  entity_4[99-1]='';
  memset(entity_6, 'u', entity_9-1);
  entity_6[entity_9-1]='';
  entity_9 = 8;
  strcpy(entity_7, entity_6);
}