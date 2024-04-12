void fun()
{
  int entity_3 = 90;
  char* entity_0;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  memset(entity_7, 'L', entity_3-1);
  entity_7[entity_3-1]='';
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[16-1]='';
  memcpy(entity_0, entity_7, entity_3*sizeof(char));
}