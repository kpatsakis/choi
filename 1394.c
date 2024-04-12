void fun()
{
  int entity_2 = 57;
  char entity_8[41] = "";
  entity_8 = NULL;
  char* entity_4;
  char* entity_9;
  entity_9 = (char*)malloc(14*sizeof(char));
  entity_9[14-1]='';
  entity_4 = (char*)malloc(53*sizeof(char));
  entity_4[53-1]='';
  memset(entity_8, 'X', 41-1);
  entity_8[41-1]='';
  memcpy(entity_9, entity_8, 41*sizeof(char));
}