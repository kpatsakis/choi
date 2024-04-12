void fun()
{
  int entity_8 = 87;
  entity_8 = 80;
  char entity_7[4] = "";
  entity_7 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_7, 'T', 4-1);
  entity_7[4-1]='';
  memcpy(entity_1, entity_7, 4*sizeof(char));
}