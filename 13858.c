void fun()
{
  int entity_5 = 61;
  int entity_1 = 85;
  char* entity_8;
  char entity_7[21] = "";
  char* entity_6;
  char* entity_9;
  entity_9 = (char*)malloc(7*sizeof(char));
  entity_9[0]='0';
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[0]='0';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 't', 21-1);
  entity_7[21-1]='0';
  entity_5 = 13;
  strcpy(entity_8, entity_7);
}