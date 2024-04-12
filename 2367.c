void fun()
{
  int entity_6 = 47;
  entity_6 = 5;
  char* entity_8;
  char entity_4[13] = "";
  entity_4 = NULL;
  memset(entity_4, 'Q', 13-1);
  entity_4[13-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memcpy(entity_8, entity_4, 13*sizeof(char));
}