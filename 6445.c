void fun()
{
  int entity_4 = 60;
  char entity_8[23] = "";
  entity_8 = NULL;
  char* entity_2;
  char* entity_9;
  char entity_6[93] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(6*sizeof(char));
  entity_9[6-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_6, 's', 93-1);
  entity_6[93-1]='';
  memset(entity_8, 'n', 23-1);
  entity_8[23-1]='';
  entity_4 = 75;
  strcpy(entity_2, entity_6);
}