void fun()
{
  int entity_2 = 6;
  entity_2 = 8;
  char* entity_1;
  char* entity_8;
  char entity_3[entity_2] = "";
  memset(entity_3, 'U', entity_2-1);
  entity_3[entity_2-1]='0';
  entity_1 = (char*)malloc(56*sizeof(char));
  entity_1[0]='0';
  entity_8 = (char*)malloc(11*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_1, entity_3, entity_2*sizeof(char));
}