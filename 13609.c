void fun()
{
  int entity_0 = 19;
  entity_0 = 8;
  char entity_7[14] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 't', 14-1);
  entity_7[14-1]='0';
  memcpy(entity_3, entity_7, 14*sizeof(char));
}