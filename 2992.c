void fun()
{
  int entity_0 = 55;
  int entity_9 = 8;
  char* entity_2;
  char* entity_4;
  char entity_8 = 'a';
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(57*sizeof(char));
  entity_2[57-1]='';
  entity_4 = (char*)malloc(50*sizeof(char));
  entity_4[50-1]='';
  memset(entity_5, 'V', entity_0-1);
  entity_5[entity_0-1]='';
  strcpy(entity_2, entity_5);
}