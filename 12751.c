void fun()
{
  int entity_3 = 51;
  char entity_1[entity_3] = "";
  char* entity_4;
  char* entity_0;
  char entity_7 = 'a';
  char entity_6 = 'i';
  memset(entity_1, 'M', entity_3-1);
  entity_1[entity_3-1]='0';
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_0, entity_1, entity_3*sizeof(char));
}