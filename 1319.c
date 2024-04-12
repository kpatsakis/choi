void fun()
{
  int entity_3 = 69;
  char* entity_9;
  char entity_8[71] = "";
  entity_8 = NULL;
  char entity_1[0] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_8, 'a', 71-1);
  entity_8[71-1]='';
  memset(entity_1, 'V', 0-1);
  entity_1[0-1]='';
  memcpy(entity_9, entity_8, 71*sizeof(char));
}