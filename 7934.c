void fun()
{
  int entity_0 = 55;
  char entity_1[77] = "";
  entity_1 = NULL;
  char* entity_2;
  char entity_9[44] = "";
  entity_9 = NULL;
  char entity_5[71] = "";
  entity_5 = NULL;
  memset(entity_5, 'b', 71-1);
  entity_5[71-1]='';
  memset(entity_9, 'h', 44-1);
  entity_9[44-1]='';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  memset(entity_1, 'U', 77-1);
  entity_1[77-1]='';
  memcpy(entity_2, entity_5, 71*sizeof(char));
}