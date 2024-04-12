void fun()
{
  int entity_9 = 32;
  char entity_6[5] = "";
  entity_6 = NULL;
  char* entity_3;
  char entity_2[35] = "";
  entity_2 = NULL;
  char entity_4[4] = "";
  entity_4 = NULL;
  memset(entity_6, 'e', 5-1);
  entity_6[5-1]='';
  memset(entity_4, 'H', 4-1);
  entity_4[4-1]='';
  memset(entity_2, 'g', 35-1);
  entity_2[35-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  strcpy(entity_3, entity_4);
}