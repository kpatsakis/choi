void fun()
{
  int entity_8 = 92;
  char* entity_6;
  char entity_2[entity_8] = "";
  char* entity_5;
  char* entity_4;
  entity_6 = (char*)malloc(97*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'R', entity_8-1);
  entity_2[entity_8-1]='0';
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[0]='0';
  entity_4 = (char*)malloc(80*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_5, entity_2, entity_8*sizeof(char));
}