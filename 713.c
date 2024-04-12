void fun()
{
  int entity_3 = 52;
  char* entity_8;
  char entity_7[30] = "";
  entity_7 = NULL;
  memset(entity_7, 'L', 30-1);
  entity_7[30-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memcpy(entity_8, entity_7, 30*sizeof(char));
}