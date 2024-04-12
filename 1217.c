void fun()
{
  int entity_2 = 40;
  entity_2 = 62;
  char entity_9[44] = "";
  entity_9 = NULL;
  char* entity_4;
  char entity_3 = 'X';
  char entity_6[62] = "";
  entity_6 = NULL;
  memset(entity_9, 'L', 44-1);
  entity_9[44-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_6, 's', 62-1);
  entity_6[62-1]='';
  strcpy(entity_4, entity_9);
}