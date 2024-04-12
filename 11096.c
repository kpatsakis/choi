void fun()
{
  char entity_8[66] = "";
  char* entity_5;
  memset(entity_8, 'L', 66-1);
  entity_8[66-1]='0';
  entity_5 = (char*)malloc(70*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_8, 66*sizeof(char));
}