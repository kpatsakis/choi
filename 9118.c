void fun()
{
  int entity_3 = 46;
  char* entity_0;
  char entity_1 = 'w';
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'k', entity_3-1);
  entity_4[entity_3-1]='';
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[97-1]='';
  entity_0 = (char*)malloc(82*sizeof(char));
  entity_0[82-1]='';
  memcpy(entity_0, entity_4, entity_3*sizeof(char));
}