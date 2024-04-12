void fun()
{
  int entity_5 = 14;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char entity_2[20] = "";
  entity_2 = NULL;
  char entity_6[18] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(43*sizeof(char));
  entity_0[43-1]='';
  memset(entity_6, 'i', 18-1);
  entity_6[18-1]='';
  memset(entity_3, 'g', entity_5-1);
  entity_3[entity_5-1]='';
  memset(entity_2, 'z', 20-1);
  entity_2[20-1]='';
  strcpy(entity_0, entity_3);
}