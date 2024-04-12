void fun()
{
  int entity_8 = 58;
  int entity_6 = 83;
  char* entity_7;
  char entity_9[64] = "";
  char* entity_2;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'u', 64-1);
  entity_9[64-1]='0';
  entity_2 = (char*)malloc(25*sizeof(char));
  entity_2[0]='0';
  entity_8 = 44;
  memcpy(entity_7, entity_9, 64*sizeof(char));
}