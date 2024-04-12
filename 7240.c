void fun()
{
  int entity_5 = 46;
  char* entity_2;
  char entity_3[34] = "";
  entity_3 = NULL;
  char* entity_9;
  char* entity_6;
  entity_6 = (char*)malloc(57*sizeof(char));
  entity_6[57-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_3, 'x', 34-1);
  entity_3[34-1]='';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  strcpy(entity_2, entity_3);
}