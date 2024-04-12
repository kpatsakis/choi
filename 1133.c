void fun()
{
  int entity_3 = 12;
  entity_3 = 12;
  char entity_1[21] = "";
  entity_1 = NULL;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(14*sizeof(char));
  entity_2[14-1]='';
  memset(entity_6, 'o', entity_3-1);
  entity_6[entity_3-1]='';
  memset(entity_1, 'H', 21-1);
  entity_1[21-1]='';
  strcpy(entity_2, entity_6);
}