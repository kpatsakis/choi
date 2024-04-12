void fun()
{
  int entity_2 = 93;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'W', entity_2-1);
  entity_6[entity_2-1]='';
  entity_7 = (char*)malloc(91*sizeof(char));
  entity_7[91-1]='';
  entity_2 = 54;
  memcpy(entity_7, entity_6, entity_2*sizeof(char));
}