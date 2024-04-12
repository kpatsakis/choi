void fun()
{
  int entity_1 = 13;
  char entity_4[48] = "";
  char* entity_7;
  char* entity_6;
  entity_7 = (char*)malloc(50*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'B', 48-1);
  entity_4[48-1]='0';
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_7, entity_4, 48*sizeof(char));
}