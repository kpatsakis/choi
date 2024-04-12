void fun()
{
  int entity_7 = 65;
  char* entity_9;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[24-1]='';
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[57-1]='';
  memset(entity_2, 'A', entity_7-1);
  entity_2[entity_7-1]='';
  strcpy(entity_4, entity_2);
}