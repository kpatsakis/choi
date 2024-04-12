void fun()
{
  char* entity_0;
  char entity_2[34] = "";
  char* entity_4;
  char* entity_8;
  memset(entity_2, 'A', 34-1);
  entity_2[34-1]='0';
  entity_8 = (char*)malloc(1*sizeof(char));
  entity_8[0]='0';
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[0]='0';
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_2, 34*sizeof(char));
}