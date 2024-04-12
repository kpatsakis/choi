void fun()
{
  int entity_0 = 36;
  char entity_9 = 'z';
  char* entity_3;
  char* entity_5;
  char entity_8[49] = "";
  entity_8 = NULL;
  memset(entity_8, 'o', 49-1);
  entity_8[49-1]='';
  entity_3 = (char*)malloc(97*sizeof(char));
  entity_3[97-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memcpy(entity_5, entity_8, 49*sizeof(char));
}