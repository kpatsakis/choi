void fun()
{
  char* entity_1;
  char entity_8[77] = "";
  char entity_6[66] = "";
  char* entity_7;
  entity_7 = (char*)malloc(86*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 'h', 66-1);
  entity_6[66-1]='0';
  entity_1 = (char*)malloc(89*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'F', 77-1);
  entity_8[77-1]='0';
  memcpy(entity_7, entity_6, 66*sizeof(char));
}