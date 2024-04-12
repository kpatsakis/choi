void fun()
{
  int entity_6 = 51;
  char* entity_7;
  char entity_3[83] = "";
  memset(entity_3, 'r', 83-1);
  entity_3[83-1]='0';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  entity_6 = 16;
  memcpy(entity_7, entity_3, 83*sizeof(char));
}