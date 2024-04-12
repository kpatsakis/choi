void fun()
{
  int entity_2 = 75;
  int entity_9 = 82;
  char* entity_3;
  char entity_1[67] = "";
  entity_1 = NULL;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  memset(entity_1, 'y', 67-1);
  entity_1[67-1]='';
  memset(entity_8, 'K', entity_9-1);
  entity_8[entity_9-1]='';
  memcpy(entity_3, entity_8, entity_9*sizeof(char));
}