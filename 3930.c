void fun()
{
  int entity_9 = 6;
  int entity_6 = 65;
  int entity_0 = 93;
  char* entity_4;
  char* entity_8;
  char entity_5[43] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[53-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_5, 'd', 43-1);
  entity_5[43-1]='';
  memcpy(entity_4, entity_5, 43*sizeof(char));
}