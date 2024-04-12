void fun()
{
  int entity_1 = 57;
  int entity_9 = 62;
  char* entity_6;
  char entity_7 = 'u';
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_5;
  entity_6 = (char*)malloc(97*sizeof(char));
  entity_6[97-1]='';
  entity_5 = (char*)malloc(90*sizeof(char));
  entity_5[90-1]='';
  memset(entity_2, 'L', entity_1-1);
  entity_2[entity_1-1]='';
  memcpy(entity_5, entity_2, entity_1*sizeof(char));
}