void fun()
{
  int entity_7 = 100;
  char* entity_0;
  char* entity_8;
  char entity_1[entity_7] = "";
  entity_8 = (char*)malloc(56*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'l', entity_7-1);
  entity_1[entity_7-1]='0';
  entity_0 = (char*)malloc(35*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_8, entity_1, entity_7*sizeof(char));
}