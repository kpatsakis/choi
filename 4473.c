void fun()
{
  int entity_4 = 69;
  int entity_0 = 81;
  entity_4 = 34;
  char entity_3[29] = "";
  entity_3 = NULL;
  char entity_5[79] = "";
  entity_5 = NULL;
  char entity_9[9] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_3, 'v', 29-1);
  entity_3[29-1]='';
  memset(entity_9, 'T', 9-1);
  entity_9[9-1]='';
  memset(entity_5, 'E', 79-1);
  entity_5[79-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memcpy(entity_2, entity_5, 79*sizeof(char));
}