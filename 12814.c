void fun()
{
  int entity_5 = 5;
  char* entity_8;
  char* entity_4;
  char entity_0 = 'K';
  char entity_1[entity_5] = "";
  char entity_2[35] = "";
  entity_4 = (char*)malloc(86*sizeof(char));
  entity_4[0]='0';
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'w', entity_5-1);
  entity_1[entity_5-1]='0';
  memset(entity_2, 'F', 35-1);
  entity_2[35-1]='0';
  memcpy(entity_8, entity_1, entity_5*sizeof(char));
}