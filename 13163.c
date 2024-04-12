void fun()
{
  int entity_8 = 10;
  int entity_1 = 59;
  char entity_6[8] = "";
  char* entity_2;
  char entity_5[41] = "";
  char entity_4 = 'L';
  memset(entity_6, 'S', 8-1);
  entity_6[8-1]='0';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 's', 41-1);
  entity_5[41-1]='0';
  entity_8 = 45;
  memcpy(entity_2, entity_6, 8*sizeof(char));
}