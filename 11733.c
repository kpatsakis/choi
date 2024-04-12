void fun()
{
  char* entity_8;
  char entity_6[70] = "";
  memset(entity_6, 'r', 70-1);
  entity_6[70-1]='0';
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_6, 70*sizeof(char));
}