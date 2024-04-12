void fun()
{
  char* entity_3;
  char* entity_4;
  char entity_7[19] = "";
  memset(entity_7, 'r', 19-1);
  entity_7[19-1]='0';
  entity_4 = (char*)malloc(84*sizeof(char));
  entity_4[0]='0';
  entity_3 = (char*)malloc(50*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_4, entity_7, 19*sizeof(char));
}