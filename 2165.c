void fun()
{
  int entity_4 = 8;
  entity_4 = 16;
  char* entity_8;
  char* entity_7;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(82*sizeof(char));
  entity_8[82-1]='';
  memset(entity_0, 'v', entity_4-1);
  entity_0[entity_4-1]='';
  entity_7 = (char*)malloc(48*sizeof(char));
  entity_7[48-1]='';
  memcpy(entity_7, entity_0, entity_4*sizeof(char));
}