void fun()
{
  int entity_4 = 63;
  char* entity_7;
  char entity_2[93] = "";
  char entity_8 = 'V';
  memset(entity_2, 'i', 93-1);
  entity_2[93-1]='0';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_2, 93*sizeof(char));
}