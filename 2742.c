void fun()
{
  int entity_7 = 74;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_4;
  char* entity_2;
  memset(entity_5, 'i', entity_7-1);
  entity_5[entity_7-1]='';
  entity_4 = (char*)malloc(73*sizeof(char));
  entity_4[73-1]='';
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[97-1]='';
  entity_7 = 35;
  strcpy(entity_4, entity_5);
}