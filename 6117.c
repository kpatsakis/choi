void fun()
{
  int entity_3 = 75;
  int entity_1 = 36;
  char* entity_5;
  char* entity_7;
  char entity_2[89] = "";
  entity_2 = NULL;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  memset(entity_0, 'U', entity_3-1);
  entity_0[entity_3-1]='';
  memset(entity_2, 'a', 89-1);
  entity_2[89-1]='';
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[24-1]='';
  entity_5 = (char*)malloc(47*sizeof(char));
  entity_5[47-1]='';
  strcpy(entity_7, entity_0);
}