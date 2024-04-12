void fun()
{
  int entity_3 = 51;
  char* entity_2;
  char entity_9 = 'U';
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_7;
  char entity_5 = 'M';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  memset(entity_8, 'd', entity_3-1);
  entity_8[entity_3-1]='';
  entity_2 = (char*)malloc(82*sizeof(char));
  entity_2[82-1]='';
  memcpy(entity_7, entity_8, entity_3*sizeof(char));
}