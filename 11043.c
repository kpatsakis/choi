void fun()
{
  int entity_5 = 85;
  char entity_6 = 'B';
  char entity_9[71] = "";
  char* entity_3;
  char* entity_8;
  memset(entity_9, 'a', 71-1);
  entity_9[71-1]='0';
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[0]='0';
  entity_8 = (char*)malloc(79*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_3, entity_9, 71*sizeof(char));
}