void fun()
{
  int entity_4 = 14;
  char entity_8[17] = "";
  entity_8 = NULL;
  char* entity_3;
  char entity_2 = 'F';
  char entity_9[1] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_9, 'T', 1-1);
  entity_9[1-1]='';
  memset(entity_8, 't', 17-1);
  entity_8[17-1]='';
  memcpy(entity_3, entity_9, 1*sizeof(char));
}