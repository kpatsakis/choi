void fun()
{
  int entity_7 = 99;
  int entity_5 = 32;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  char* entity_2;
  char entity_6[65] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', 65-1);
  entity_6[65-1]='';
  memset(entity_1, 'a', entity_7-1);
  entity_1[entity_7-1]='';
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[62-1]='';
  strcpy(entity_2, entity_1);
}