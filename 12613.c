void fun()
{
  int entity_5 = 68;
  char* entity_6;
  char entity_0[66] = "";
  memset(entity_0, 'V', 66-1);
  entity_0[66-1]='0';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_0, 66*sizeof(char));
}