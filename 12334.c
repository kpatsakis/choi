void fun()
{
  int entity_8 = 24;
  char entity_2[entity_8] = "";
  char* entity_3;
  char* entity_5;
  entity_3 = (char*)malloc(52*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'C', entity_8-1);
  entity_2[entity_8-1]='0';
  entity_5 = (char*)malloc(89*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_2, entity_8*sizeof(char));
}