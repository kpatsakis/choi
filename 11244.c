void fun()
{
  char* entity_6;
  char entity_7[53] = "";
  memset(entity_7, 'f', 53-1);
  entity_7[53-1]='0';
  entity_6 = (char*)malloc(89*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_7, 53*sizeof(char));
}