void fun()
{
  int entity_2 = 17;
  entity_2 = 27;
  char* entity_8;
  char entity_4 = 'v';
  char entity_6[43] = "";
  entity_6 = NULL;
  char entity_1 = 'G';
  char entity_3[90] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memset(entity_3, 'w', 90-1);
  entity_3[90-1]='';
  memset(entity_6, 'a', 43-1);
  entity_6[43-1]='';
  strcpy(entity_8, entity_6);
}