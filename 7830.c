void fun()
{
  int entity_8 = 6;
  entity_8 = 39;
  char* entity_9;
  char* entity_7;
  char entity_6[44] = "";
  entity_6 = NULL;
  char entity_2[50] = "";
  entity_2 = NULL;
  memset(entity_2, 'B', 50-1);
  entity_2[50-1]='';
  entity_7 = (char*)malloc(55*sizeof(char));
  entity_7[55-1]='';
  memset(entity_6, 'J', 44-1);
  entity_6[44-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memcpy(entity_9, entity_6, 44*sizeof(char));
}