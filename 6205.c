void fun()
{
  int entity_8 = 81;
  char* entity_7;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_4, 'G', entity_8-1);
  entity_4[entity_8-1]='';
  entity_7 = (char*)malloc(5*sizeof(char));
  entity_7[5-1]='';
  memcpy(entity_7, entity_4, entity_8*sizeof(char));
}