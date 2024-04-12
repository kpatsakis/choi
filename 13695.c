void fun()
{
  int entity_8 = 87;
  entity_8 = 20;
  char* entity_4;
  char entity_5[87] = "";
  char* entity_7;
  memset(entity_5, 'f', 87-1);
  entity_5[87-1]='0';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[0]='0';
  entity_4 = (char*)malloc(27*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_7, entity_5, 87*sizeof(char));
}