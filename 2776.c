void fun()
{
  int entity_8 = 7;
  char entity_3[16] = "";
  entity_3 = NULL;
  char* entity_0;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  entity_0 = (char*)malloc(48*sizeof(char));
  entity_0[48-1]='';
  memset(entity_3, 'P', 16-1);
  entity_3[16-1]='';
  entity_8 = 85;
  memcpy(entity_9, entity_3, 16*sizeof(char));
}