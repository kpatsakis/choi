void fun()
{
  int entity_8 = 73;
  char* entity_7;
  char* entity_5;
  char entity_4[17] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(52*sizeof(char));
  entity_5[52-1]='';
  memset(entity_4, 'H', 17-1);
  entity_4[17-1]='';
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  memcpy(entity_7, entity_4, 17*sizeof(char));
}