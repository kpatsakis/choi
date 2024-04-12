void fun()
{
  int entity_3 = 96;
  char* entity_4;
  char* entity_8;
  char entity_5[7] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(73*sizeof(char));
  entity_8[73-1]='';
  memset(entity_5, 'd', 7-1);
  entity_5[7-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  entity_3 = 64;
  memcpy(entity_4, entity_5, 7*sizeof(char));
}