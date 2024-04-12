void fun()
{
  int entity_8 = 70;
  char entity_9[66] = "";
  char entity_7[63] = "";
  char* entity_3;
  memset(entity_9, 'Y', 66-1);
  entity_9[66-1]='0';
  memset(entity_7, 'O', 63-1);
  entity_7[63-1]='0';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_9, 66*sizeof(char));
}