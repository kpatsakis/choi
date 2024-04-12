void fun()
{
  char* entity_9;
  char entity_8[35] = "";
  char* entity_0;
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'l', 35-1);
  entity_8[35-1]='0';
  entity_0 = (char*)malloc(89*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, 35*sizeof(char));
}