void fun()
{
  int entity_1 = 74;
  char* entity_4;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  memset(entity_8, 'G', entity_1-1);
  entity_8[entity_1-1]='';
  entity_4 = (char*)malloc(17*sizeof(char));
  entity_4[17-1]='';
  memcpy(entity_4, entity_8, entity_1*sizeof(char));
}