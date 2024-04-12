void fun()
{
  int entity_8 = 50;
  entity_8 = 77;
  char* entity_7;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'K', entity_8-1);
  entity_3[entity_8-1]='';
  entity_7 = (char*)malloc(16*sizeof(char));
  entity_7[16-1]='';
  memcpy(entity_7, entity_3, entity_8*sizeof(char));
}