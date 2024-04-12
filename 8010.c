void fun()
{
  int entity_8 = 98;
  entity_8 = 21;
  char* entity_6;
  char entity_7[15] = "";
  entity_7 = NULL;
  memset(entity_7, 'E', 15-1);
  entity_7[15-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memcpy(entity_6, entity_7, 15*sizeof(char));
}