void fun()
{
  int entity_3 = 28;
  int entity_0 = 44;
  int entity_6 = 27;
  char* entity_7;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(16*sizeof(char));
  entity_7[16-1]='';
  memset(entity_4, 'y', entity_0-1);
  entity_4[entity_0-1]='';
  memcpy(entity_7, entity_4, entity_0*sizeof(char));
}