void fun()
{
  int entity_5 = 60;
  char* entity_4;
  char entity_8[4] = "";
  char* entity_9;
  entity_9 = (char*)malloc(35*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'r', 4-1);
  entity_8[4-1]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  entity_5 = 69;
  memcpy(entity_4, entity_8, 4*sizeof(char));
}