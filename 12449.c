void fun()
{
  int entity_5 = 57;
  int entity_4 = 11;
  char entity_1[95] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'L', 95-1);
  entity_1[95-1]='0';
  memcpy(entity_0, entity_1, 95*sizeof(char));
}