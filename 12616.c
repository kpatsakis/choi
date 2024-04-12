void fun()
{
  int entity_8 = 69;
  char* entity_2;
  char* entity_7;
  char entity_5[85] = "";
  char entity_6 = 'b';
  char entity_0[entity_8] = "";
  entity_2 = (char*)malloc(58*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'P', entity_8-1);
  entity_0[entity_8-1]='0';
  memset(entity_5, 'E', 85-1);
  entity_5[85-1]='0';
  entity_7 = (char*)malloc(6*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_2, entity_0, entity_8*sizeof(char));
}