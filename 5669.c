void fun()
{
  int entity_9 = 23;
  int entity_8 = 5;
  entity_9 = 23;
  char entity_6[38] = "";
  entity_6 = NULL;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char* entity_3;
  char* entity_2;
  memset(entity_7, 'g', entity_9-1);
  entity_7[entity_9-1]='';
  entity_2 = (char*)malloc(41*sizeof(char));
  entity_2[41-1]='';
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[77-1]='';
  memset(entity_6, 'G', 38-1);
  entity_6[38-1]='';
  strcpy(entity_3, entity_7);
}