void fun()
{
  int entity_5 = 99;
  int entity_3 = 37;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'D', entity_3-1);
  entity_7[entity_3-1]='';
  entity_8 = (char*)malloc(30*sizeof(char));
  entity_8[30-1]='';
  memcpy(entity_8, entity_7, entity_3*sizeof(char));
}