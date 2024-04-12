void fun()
{
  char entity_9 = 'O';
  char* entity_0;
  char entity_8[70] = "";
  entity_0 = (char*)malloc(22*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'r', 70-1);
  entity_8[70-1]='0';
  memcpy(entity_0, entity_8, 70*sizeof(char));
}