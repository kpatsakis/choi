void fun()
{
  char* entity_0;
  char entity_7[66] = "";
  char entity_2[43] = "";
  char entity_6[17] = "";
  memset(entity_6, 'E', 17-1);
  entity_6[17-1]='0';
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'i', 43-1);
  entity_2[43-1]='0';
  memset(entity_7, 'j', 66-1);
  entity_7[66-1]='0';
  memcpy(entity_0, entity_7, 66*sizeof(char));
}