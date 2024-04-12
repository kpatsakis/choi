void fun()
{
  int entity_2 = 60;
  char* entity_8;
  char entity_7[62] = "";
  char* entity_0;
  memset(entity_7, 'W', 62-1);
  entity_7[62-1]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  entity_0 = (char*)malloc(18*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_8, entity_7, 62*sizeof(char));
}