void fun()
{
  int entity_3 = 63;
  char entity_2[54] = "";
  char* entity_7;
  memset(entity_2, 'P', 54-1);
  entity_2[54-1]='0';
  entity_7 = (char*)malloc(79*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_2, 54*sizeof(char));
}