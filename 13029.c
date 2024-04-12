void fun()
{
  int entity_0 = 51;
  char entity_6[90] = "";
  char* entity_1;
  memset(entity_6, 'C', 90-1);
  entity_6[90-1]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  entity_0 = 79;
  memcpy(entity_1, entity_6, 90*sizeof(char));
}