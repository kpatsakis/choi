void fun()
{
  char* entity_7;
  char entity_6[19] = "";
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 't', 19-1);
  entity_6[19-1]='0';
  memcpy(entity_7, entity_6, 19*sizeof(char));
}