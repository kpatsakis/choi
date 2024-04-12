void fun()
{
  char* entity_8;
  char* entity_9;
  char entity_7[85] = "";
  char* entity_2;
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[0]='0';
  entity_8 = (char*)malloc(32*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'u', 85-1);
  entity_7[85-1]='0';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_7, 85*sizeof(char));
}