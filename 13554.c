void fun()
{
  int entity_6 = 66;
  entity_6 = 3;
  char* entity_4;
  char* entity_1;
  char entity_8[34] = "";
  entity_4 = (char*)malloc(18*sizeof(char));
  entity_4[0]='0';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'l', 34-1);
  entity_8[34-1]='0';
  memcpy(entity_1, entity_8, 34*sizeof(char));
}