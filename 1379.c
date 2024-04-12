void fun()
{
  int entity_3 = 55;
  entity_3 = 32;
  char entity_7[26] = "";
  entity_7 = NULL;
  char* entity_9;
  char* entity_8;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  memset(entity_7, 'Y', 26-1);
  entity_7[26-1]='';
  memcpy(entity_8, entity_7, 26*sizeof(char));
}