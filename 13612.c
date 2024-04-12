void fun()
{
  int entity_7 = 83;
  char* entity_4;
  char* entity_8;
  char entity_3[entity_7] = "";
  entity_4 = (char*)malloc(6*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'I', entity_7-1);
  entity_3[entity_7-1]='0';
  entity_8 = (char*)malloc(79*sizeof(char));
  entity_8[0]='0';
  entity_7 = 87;
  memcpy(entity_8, entity_3, entity_7*sizeof(char));
}