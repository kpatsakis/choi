void fun()
{
  int entity_1 = 27;
  char entity_4[41] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memset(entity_4, 'O', 41-1);
  entity_4[41-1]='';
  memcpy(entity_8, entity_4, 41*sizeof(char));
}