void fun()
{
  int entity_9 = 17;
  int entity_4 = 76;
  entity_4 = 6;
  char entity_8[85] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_8, 'Q', 85-1);
  entity_8[85-1]='';
  memcpy(entity_6, entity_8, 85*sizeof(char));
}