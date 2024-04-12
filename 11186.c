void fun()
{
  char entity_9[26] = "";
  char* entity_2;
  char entity_0[44] = "";
  memset(entity_0, 'j', 44-1);
  entity_0[44-1]='0';
  entity_2 = (char*)malloc(84*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'u', 26-1);
  entity_9[26-1]='0';
  memcpy(entity_2, entity_0, 44*sizeof(char));
}