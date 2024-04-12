void fun()
{
  int entity_4 = 43;
  int entity_6 = 43;
  entity_6 = 85;
  char entity_7[61] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'i', 61-1);
  entity_7[61-1]='0';
  memcpy(entity_0, entity_7, 61*sizeof(char));
}