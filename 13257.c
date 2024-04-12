void fun()
{
  int entity_7 = 5;
  entity_7 = 81;
  char* entity_8;
  char entity_3[entity_7] = "";
  char* entity_6;
  char entity_0 = 'E';
  char* entity_4;
  entity_4 = (char*)malloc(58*sizeof(char));
  entity_4[0]='0';
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[0]='0';
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'A', entity_7-1);
  entity_3[entity_7-1]='0';
  memcpy(entity_6, entity_3, entity_7*sizeof(char));
}