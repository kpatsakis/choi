void fun()
{
  int entity_0 = 90;
  int entity_8 = 55;
  char* entity_3;
  char* entity_9;
  char entity_2[41] = "";
  entity_2 = NULL;
  char entity_6[32] = "";
  entity_6 = NULL;
  memset(entity_6, 'X', 32-1);
  entity_6[32-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_2, 'P', 41-1);
  entity_2[41-1]='';
  entity_9 = (char*)malloc(2*sizeof(char));
  entity_9[2-1]='';
  memcpy(entity_3, entity_2, 41*sizeof(char));
}