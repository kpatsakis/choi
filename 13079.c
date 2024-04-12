void fun()
{
  int entity_0 = 50;
  int entity_8 = 90;
  entity_0 = 1;
  char entity_5[28] = "";
  char entity_2[62] = "";
  char* entity_1;
  memset(entity_2, 'z', 62-1);
  entity_2[62-1]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'N', 28-1);
  entity_5[28-1]='0';
  memcpy(entity_1, entity_5, 28*sizeof(char));
}