void fun()
{
  int entity_5 = 37;
  char* entity_2;
  char entity_6[19] = "";
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'w', 19-1);
  entity_6[19-1]='0';
  memcpy(entity_2, entity_6, 19*sizeof(char));
}