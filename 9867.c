void fun()
{
  int entity_5 = 16;
  int entity_6 = 39;
  char entity_4[8] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_9[23] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_4, 'p', 8-1);
  entity_4[8-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  entity_2 = (char*)malloc(45*sizeof(char));
  entity_2[45-1]='';
  memset(entity_9, 'c', 23-1);
  entity_9[23-1]='';
  memcpy(entity_3, entity_9, 23*sizeof(char));
}