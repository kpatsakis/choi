void fun()
{
  int entity_3 = 27;
  char entity_9 = 'H';
  char* entity_7;
  char entity_8[62] = "";
  char entity_5[20] = "";
  memset(entity_8, 'u', 62-1);
  entity_8[62-1]='0';
  memset(entity_5, 'j', 20-1);
  entity_5[20-1]='0';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  entity_3 = 3;
  memcpy(entity_7, entity_5, 20*sizeof(char));
}