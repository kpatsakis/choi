void fun()
{
  int entity_7 = 20;
  entity_7 = 47;
  char entity_3[entity_7] = "";
  char entity_8 = 'p';
  char* entity_4;
  char entity_1[16] = "";
  memset(entity_3, 'e', entity_7-1);
  entity_3[entity_7-1]='0';
  memset(entity_1, 'G', 16-1);
  entity_1[16-1]='0';
  entity_4 = (char*)malloc(36*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_3, entity_7*sizeof(char));
}