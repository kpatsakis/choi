void fun()
{
  char entity_3[91] = "";
  char* entity_6;
  memset(entity_3, 'r', 91-1);
  entity_3[91-1]='0';
  entity_6 = (char*)malloc(70*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_3, 91*sizeof(char));
}