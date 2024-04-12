void fun()
{
  int entity_3 = 96;
  char entity_4[1] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'V', 1-1);
  entity_4[1-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_3 = 91;
  memcpy(entity_7, entity_4, 1*sizeof(char));
}