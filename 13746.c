void fun()
{
  int entity_3 = 44;
  int entity_0 = 68;
  char* entity_1;
  char entity_7[63] = "";
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'x', 63-1);
  entity_7[63-1]='0';
  entity_0 = 59;
  memcpy(entity_1, entity_7, 63*sizeof(char));
}