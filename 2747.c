void fun()
{
  int entity_3 = 54;
  char* entity_2;
  char* entity_1;
  char entity_4[4] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[64-1]='';
  memset(entity_4, 'X', 4-1);
  entity_4[4-1]='';
  entity_1 = (char*)malloc(77*sizeof(char));
  entity_1[77-1]='';
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[22-1]='';
  strcpy(entity_2, entity_4);
}