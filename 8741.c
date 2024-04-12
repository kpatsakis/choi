void fun()
{
  int entity_8 = 70;
  entity_8 = 81;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'j', entity_8-1);
  entity_6[entity_8-1]='';
  entity_7 = (char*)malloc(83*sizeof(char));
  entity_7[83-1]='';
  memcpy(entity_7, entity_6, entity_8*sizeof(char));
}