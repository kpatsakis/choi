void fun()
{
  int entity_3 = 45;
  char entity_6[84] = "";
  entity_6 = NULL;
  char* entity_8;
  char* entity_0;
  char entity_4[65] = "";
  entity_4 = NULL;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_6, 'O', 84-1);
  entity_6[84-1]='';
  entity_8 = (char*)malloc(83*sizeof(char));
  entity_8[83-1]='';
  memset(entity_4, 'x', 65-1);
  entity_4[65-1]='';
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[30-1]='';
  memset(entity_2, 'M', entity_3-1);
  entity_2[entity_3-1]='';
  strcpy(entity_8, entity_2);
}