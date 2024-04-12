void fun()
{
  int entity_7 = 35;
  entity_7 = 83;
  char* entity_8;
  char entity_6[3] = "";
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'e', 3-1);
  entity_6[3-1]='0';
  memcpy(entity_8, entity_6, 3*sizeof(char));
}