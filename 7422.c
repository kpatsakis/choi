void fun()
{
  int entity_3 = 81;
  char* entity_7;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  memset(entity_0, 'Y', entity_3-1);
  entity_0[entity_3-1]='';
  entity_7 = (char*)malloc(16*sizeof(char));
  entity_7[16-1]='';
  entity_3 = 55;
  memcpy(entity_7, entity_0, entity_3*sizeof(char));
}