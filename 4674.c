void fun()
{
  int entity_7 = 20;
  char entity_8[98] = "";
  entity_8 = NULL;
  char* entity_2;
  char* entity_9;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(18*sizeof(char));
  entity_2[18-1]='';
  memset(entity_1, 'G', entity_7-1);
  entity_1[entity_7-1]='';
  memset(entity_8, 'o', 98-1);
  entity_8[98-1]='';
  entity_9 = (char*)malloc(73*sizeof(char));
  entity_9[73-1]='';
  entity_7 = 9;
  memcpy(entity_9, entity_1, entity_7*sizeof(char));
}