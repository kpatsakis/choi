void fun()
{
  int entity_8 = 49;
  char* entity_3;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char entity_4[62] = "";
  entity_4 = NULL;
  char entity_6[34] = "";
  entity_6 = NULL;
  memset(entity_6, 'h', 34-1);
  entity_6[34-1]='';
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[44-1]='';
  memset(entity_4, 'K', 62-1);
  entity_4[62-1]='';
  memset(entity_2, 'x', entity_8-1);
  entity_2[entity_8-1]='';
  entity_2[83] = 'o';
}