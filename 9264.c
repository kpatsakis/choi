void fun()
{
  int entity_7 = 57;
  char entity_8[77] = "";
  entity_8 = NULL;
  char entity_1[14] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_2[68] = "";
  entity_2 = NULL;
  memset(entity_1, 'W', 14-1);
  entity_1[14-1]='';
  memset(entity_8, 'R', 77-1);
  entity_8[77-1]='';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_2, 'a', 68-1);
  entity_2[68-1]='';
  memcpy(entity_9, entity_8, 77*sizeof(char));
}