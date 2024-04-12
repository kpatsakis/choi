void fun()
{
  int entity_1 = 19;
  char* entity_5;
  char entity_6[63] = "";
  entity_6 = NULL;
  memset(entity_6, 'i', 63-1);
  entity_6[63-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memcpy(entity_5, entity_6, 63*sizeof(char));
}