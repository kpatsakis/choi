void fun()
{
  int entity_1 = 1;
  char entity_8 = 'f';
  char* entity_2;
  char entity_3[5] = "";
  char entity_0 = 'L';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'g', 5-1);
  entity_3[5-1]='0';
  entity_1 = 23;
  memcpy(entity_2, entity_3, 5*sizeof(char));
}