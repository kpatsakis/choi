void fun()
{
  int entity_5 = 95;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char entity_9 = 'U';
  char* entity_6;
  char* entity_1;
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[81-1]='';
  memset(entity_2, 'z', entity_5-1);
  entity_2[entity_5-1]='';
  entity_1 = (char*)malloc(8*sizeof(char));
  entity_1[8-1]='';
  entity_5 = 97;
  strcpy(entity_6, entity_2);
}