void fun()
{
  int entity_8 = 54;
  char entity_1 = 'D';
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'J', entity_8-1);
  entity_7[entity_8-1]='';
  entity_4 = (char*)malloc(83*sizeof(char));
  entity_4[83-1]='';
  memcpy(entity_4, entity_7, entity_8*sizeof(char));
}