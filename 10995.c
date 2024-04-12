void fun()
{
  char entity_7[66] = "";
  char* entity_3;
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'l', 66-1);
  entity_7[66-1]='0';
  entity_7[63] = 'Z';
}