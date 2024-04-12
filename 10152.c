void fun()
{
  int entity_1 = 46;
  char entity_5[66] = "";
  char* entity_7;
  memset(entity_5, 'v', 66-1);
  entity_5[66-1]='0';
  entity_7 = (char*)malloc(13*sizeof(char));
  entity_7[0]='0';
  entity_5[7] = 'f';
}