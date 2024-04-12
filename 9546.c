void fun()
{
  int entity_0 = 8;
  int entity_8 = 13;
  char entity_5[55] = "";
  entity_5 = NULL;
  char* entity_2;
  char* entity_6;
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  memset(entity_5, 'd', 55-1);
  entity_5[55-1]='';
  entity_6 = (char*)malloc(48*sizeof(char));
  entity_6[48-1]='';
  memcpy(entity_2, entity_5, 55*sizeof(char));
}