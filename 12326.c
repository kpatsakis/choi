void fun()
{
  int entity_1 = 24;
  int entity_4 = 76;
  char* entity_8;
  char entity_6[66] = "";
  memset(entity_6, 'Q', 66-1);
  entity_6[66-1]='0';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_6, 66*sizeof(char));
}