void fun()
{
  int entity_7 = 13;
  char* entity_5;
  char* entity_0;
  char entity_3[40] = "";
  entity_3 = NULL;
  char entity_8 = 'a';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_3, 'g', 40-1);
  entity_3[40-1]='';
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[15-1]='';
  entity_7 = 27;
  strcpy(entity_0, entity_3);
}