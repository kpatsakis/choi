void fun()
{
  int entity_3 = 38;
  char* entity_8;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(37*sizeof(char));
  entity_5[37-1]='';
  entity_8 = (char*)malloc(85*sizeof(char));
  entity_8[85-1]='';
  memset(entity_4, 'c', entity_3-1);
  entity_4[entity_3-1]='';
  memcpy(entity_8, entity_4, entity_3*sizeof(char));
}