void fun()
{
  int entity_6 = 33;
  char entity_9 = 's';
  char entity_1 = 'e';
  char entity_3[11] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'z', 11-1);
  entity_3[11-1]='0';
  memcpy(entity_0, entity_3, 11*sizeof(char));
}