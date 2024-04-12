void fun()
{
  int entity_9 = 19;
  char entity_3[20] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_6[63] = "";
  entity_6 = NULL;
  char entity_2 = 'e';
  memset(entity_3, 'Z', 20-1);
  entity_3[20-1]='';
  memset(entity_6, 'l', 63-1);
  entity_6[63-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  entity_9 = 56;
  memcpy(entity_7, entity_3, 20*sizeof(char));
}