void fun()
{
  int entity_3 = 40;
  char* entity_0;
  char entity_5[25] = "";
  char* entity_8;
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[0]='0';
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'v', 25-1);
  entity_5[25-1]='0';
  memcpy(entity_0, entity_5, 25*sizeof(char));
}