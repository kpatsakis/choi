void fun()
{
  int entity_8 = 97;
  entity_8 = 95;
  char* entity_7;
  char entity_6[76] = "";
  char* entity_5;
  memset(entity_6, 'f', 76-1);
  entity_6[76-1]='0';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[0]='0';
  entity_7 = (char*)malloc(32*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_5, entity_6, 76*sizeof(char));
}