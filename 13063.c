void fun()
{
  int entity_2 = 17;
  char entity_0[60] = "";
  char* entity_7;
  char entity_8 = 'b';
  char entity_1[entity_2] = "";
  entity_7 = (char*)malloc(13*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'N', entity_2-1);
  entity_1[entity_2-1]='0';
  memset(entity_0, 'U', 60-1);
  entity_0[60-1]='0';
  entity_2 = 2;
  memcpy(entity_7, entity_1, entity_2*sizeof(char));
}