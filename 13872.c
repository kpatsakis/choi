void fun()
{
  int entity_3 = 84;
  char* entity_7;
  char entity_9[19] = "";
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'V', 19-1);
  entity_9[19-1]='0';
  entity_3 = 54;
  memcpy(entity_7, entity_9, 19*sizeof(char));
}