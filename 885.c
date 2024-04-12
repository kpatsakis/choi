void fun()
{
  int entity_8 = 28;
  entity_8 = 47;
  char* entity_1;
  char entity_7[20] = "";
  entity_7 = NULL;
  memset(entity_7, 'l', 20-1);
  entity_7[20-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memcpy(entity_1, entity_7, 20*sizeof(char));
}