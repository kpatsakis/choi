void fun()
{
  int entity_6 = 63;
  char entity_7[48] = "";
  entity_7 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_7, 'h', 48-1);
  entity_7[48-1]='';
  entity_6 = 27;
  memcpy(entity_1, entity_7, 48*sizeof(char));
}