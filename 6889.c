void fun()
{
  int entity_3 = 23;
  char entity_6[83] = "";
  entity_6 = NULL;
  char entity_9[88] = "";
  entity_9 = NULL;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(72*sizeof(char));
  entity_8[72-1]='';
  memset(entity_9, 't', 88-1);
  entity_9[88-1]='';
  memset(entity_2, 'c', entity_3-1);
  entity_2[entity_3-1]='';
  memset(entity_6, 'H', 83-1);
  entity_6[83-1]='';
  entity_3 = 48;
  memcpy(entity_8, entity_2, entity_3*sizeof(char));
}