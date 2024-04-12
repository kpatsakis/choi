void fun()
{
  char* entity_1;
  char entity_7[40] = "";
  char* entity_8;
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'z', 40-1);
  entity_7[40-1]='0';
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_7, 40*sizeof(char));
}