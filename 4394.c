void fun()
{
  int entity_2 = 27;
  int entity_4 = 71;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char entity_6[67] = "";
  entity_6 = NULL;
  char* entity_0;
  char* entity_3;
  memset(entity_6, 'r', 67-1);
  entity_6[67-1]='';
  entity_0 = (char*)malloc(65*sizeof(char));
  entity_0[65-1]='';
  entity_3 = (char*)malloc(47*sizeof(char));
  entity_3[47-1]='';
  memset(entity_8, 'Q', entity_4-1);
  entity_8[entity_4-1]='';
  strcpy(entity_3, entity_8);
}