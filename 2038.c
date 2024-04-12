void fun()
{
  int entity_2 = 47;
  int entity_4 = 11;
  char* entity_6;
  char* entity_7;
  char entity_5[68] = "";
  entity_5 = NULL;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  memset(entity_0, 'c', entity_4-1);
  entity_0[entity_4-1]='';
  entity_7 = (char*)malloc(36*sizeof(char));
  entity_7[36-1]='';
  entity_6 = (char*)malloc(8*sizeof(char));
  entity_6[8-1]='';
  memset(entity_5, 'Q', 68-1);
  entity_5[68-1]='';
  strcpy(entity_6, entity_0);
}