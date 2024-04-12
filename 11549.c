void fun()
{
  char entity_7[70] = "";
  char* entity_0;
  memset(entity_7, 'r', 70-1);
  entity_7[70-1]='0';
  entity_0 = (char*)malloc(27*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_7, 70*sizeof(char));
}