void fun()
{
  int entity_0 = 100;
  char entity_6[66] = "";
  char* entity_3;
  char* entity_1;
  char entity_4[19] = "";
  entity_3 = (char*)malloc(79*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'k', 19-1);
  entity_4[19-1]='0';
  memset(entity_6, 'S', 66-1);
  entity_6[66-1]='0';
  memcpy(entity_1, entity_4, 19*sizeof(char));
}