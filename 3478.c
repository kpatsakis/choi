void fun()
{
  int entity_4 = 26;
  char* entity_5;
  char entity_7[29] = "";
  entity_7 = NULL;
  char* entity_2;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_7, 'h', 29-1);
  entity_7[29-1]='';
  memset(entity_9, 'b', entity_4-1);
  entity_9[entity_4-1]='';
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[83-1]='';
  entity_5 = (char*)malloc(47*sizeof(char));
  entity_5[47-1]='';
  strcpy(entity_5, entity_9);
}