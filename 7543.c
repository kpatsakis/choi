void fun()
{
  int entity_5 = 100;
  char entity_6[23] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_6, 'b', 23-1);
  entity_6[23-1]='';
  memcpy(entity_8, entity_6, 23*sizeof(char));
}