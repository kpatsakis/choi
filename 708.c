void fun()
{
  char entity_2[77] = "";
  entity_2 = NULL;
  char entity_5[16] = "";
  entity_5 = NULL;
  char entity_9[77] = "";
  entity_9 = NULL;
  char* entity_3;
  memset(entity_5, 'r', 16-1);
  entity_5[16-1]='';
  memset(entity_2, 'Z', 77-1);
  entity_2[77-1]='';
  memset(entity_9, 'O', 77-1);
  entity_9[77-1]='';
  entity_3 = (char*)malloc(57*sizeof(char));
  entity_3[57-1]='';
  memcpy(entity_3, entity_9, 77*sizeof(char));
}