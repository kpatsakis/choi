void fun()
{
  int entity_8 = 9;
  char entity_0[entity_8] = "";
  char* entity_1;
  char* entity_5;
  entity_5 = (char*)malloc(16*sizeof(char));
  entity_5[0]='0';
  entity_1 = (char*)malloc(51*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'i', entity_8-1);
  entity_0[entity_8-1]='0';
  memcpy(entity_5, entity_0, entity_8*sizeof(char));
}