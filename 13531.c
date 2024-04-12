void fun()
{
  int entity_1 = 40;
  char entity_7[14] = "";
  char* entity_8;
  memset(entity_7, 'E', 14-1);
  entity_7[14-1]='0';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  entity_1 = 97;
  memcpy(entity_8, entity_7, 14*sizeof(char));
}