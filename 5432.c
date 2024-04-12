void fun()
{
  int entity_8 = 59;
  int entity_0 = 75;
  entity_8 = 59;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_5;
  char* entity_9;
  char entity_3[78] = "";
  entity_3 = NULL;
  memset(entity_4, 'Z', entity_8-1);
  entity_4[entity_8-1]='';
  entity_9 = (char*)malloc(11*sizeof(char));
  entity_9[11-1]='';
  entity_5 = (char*)malloc(23*sizeof(char));
  entity_5[23-1]='';
  memset(entity_3, 'U', 78-1);
  entity_3[78-1]='';
  strcpy(entity_5, entity_4);
}