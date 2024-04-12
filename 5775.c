void fun()
{
  int entity_8 = 64;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char entity_6[8] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_9 = 'D';
  entity_5 = (char*)malloc(97*sizeof(char));
  entity_5[97-1]='';
  memset(entity_6, 's', 8-1);
  entity_6[8-1]='';
  memset(entity_1, 'K', entity_8-1);
  entity_1[entity_8-1]='';
  entity_8 = 40;
  memcpy(entity_5, entity_1, entity_8*sizeof(char));
}